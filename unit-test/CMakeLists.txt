# ci_lab coverage tests, one runner per source file (the cFS convention),
# each fed by its own covmock output directory under covmock/<unit>/.
include_directories(../fsw/src)

# Let CMake tell covmock what it knows: the source root, the compilation
# database, and the sources of the ci_lab target. Optional -- a build without
# covmock installed configures exactly as before.
execute_process(COMMAND covmock cmake-dir OUTPUT_VARIABLE covmock_DIR
                OUTPUT_STRIP_TRAILING_WHITESPACE RESULT_VARIABLE covmock_rc ERROR_QUIET)
if (covmock_rc EQUAL 0)
  find_package(covmock CONFIG QUIET)
endif()
if (covmock_FOUND)
  covmock_configure(TARGET ci_lab
    CONFIG_DIR  ${MISSION_SOURCE_DIR}
    SOURCE_ROOT ${MISSION_SOURCE_DIR}
    COVERAGE    ${CMAKE_BINARY_DIR}/ci_lab-baseline.info)
endif()

# Stubs for ci_lab's own functions, one file per header (written by OSAL's
# generate_stubs.pl). A static library, so each runner pulls in only the
# stubs for the files it does not compile for real.
add_cfe_coverage_stubs(ci_lab
  stubs/ci_lab_app_stubs.c
  stubs/ci_lab_cmds_stubs.c
  stubs/ci_lab_decode_stubs.c
  stubs/ci_lab_dispatch_stubs.c
)

foreach(SRCFILE ${APP_SRC_FILES})
  get_filename_component(UNIT_NAME "${SRCFILE}" NAME_WE)
  set(RUNNER coverage-ci_lab-${UNIT_NAME}-testrunner)

  # Before the first `covmock generate` there is nothing to register, but
  # the instrumented object (and the 0% report made from it) is needed first.
  set(GENERATED ${CMAKE_CURRENT_SOURCE_DIR}/covmock/${UNIT_NAME})
  set(SETUP ${CMAKE_CURRENT_SOURCE_DIR}/support/${UNIT_NAME}_setup.c)
  if (NOT EXISTS ${GENERATED}/covmock.cmake OR NOT EXISTS ${SETUP})
    set(SETUP ${CMAKE_CURRENT_BINARY_DIR}/${UNIT_NAME}_nothing_generated_yet.c)
    file(WRITE ${SETUP} "void UtTest_Setup(void) {}\n")
  endif()

  add_cfe_coverage_test(ci_lab ${UNIT_NAME} ${SETUP} ../${SRCFILE})
  target_link_libraries(${RUNNER} coverage-ci_lab-stubs)

  if (EXISTS ${GENERATED}/covmock.cmake)
    include(${GENERATED}/covmock.cmake)
    covmock_add_to_target(${RUNNER})
  endif()

  # CI_LAB_Global is defined in ci_lab_app.c; every other runner needs one.
  if (NOT UNIT_NAME STREQUAL "ci_lab_app")
    target_sources(${RUNNER} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/support/ci_lab_global.c)
  endif()
endforeach()
