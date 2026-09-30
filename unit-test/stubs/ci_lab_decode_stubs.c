/************************************************************************
 * NASA Docket No. GSC-19,200-1, and identified as "cFS Draco"
 *
 * Copyright (c) 2023 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in ci_lab_decode
 * header
 */

#include "ci_lab_decode.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for CI_LAB_DecodeInputMessage()
 * ----------------------------------------------------
 */
CFE_Status_t CI_LAB_DecodeInputMessage(void *SourceBuffer, size_t SourceSize,
                                       CFE_SB_Buffer_t **DestBufferOut) {
  UT_GenStub_SetupReturnBuffer(CI_LAB_DecodeInputMessage, CFE_Status_t);

  UT_GenStub_AddParam(CI_LAB_DecodeInputMessage, void *, SourceBuffer);
  UT_GenStub_AddParam(CI_LAB_DecodeInputMessage, size_t, SourceSize);
  UT_GenStub_AddParam(CI_LAB_DecodeInputMessage, CFE_SB_Buffer_t **,
                      DestBufferOut);

  UT_GenStub_Execute(CI_LAB_DecodeInputMessage, Basic, NULL);

  return UT_GenStub_GetReturnValue(CI_LAB_DecodeInputMessage, CFE_Status_t);
}

/*
 * ----------------------------------------------------
 * Generated stub function for CI_LAB_GetInputBuffer()
 * ----------------------------------------------------
 */
CFE_Status_t CI_LAB_GetInputBuffer(void **BufferOut, size_t *SizeOut) {
  UT_GenStub_SetupReturnBuffer(CI_LAB_GetInputBuffer, CFE_Status_t);

  UT_GenStub_AddParam(CI_LAB_GetInputBuffer, void **, BufferOut);
  UT_GenStub_AddParam(CI_LAB_GetInputBuffer, size_t *, SizeOut);

  UT_GenStub_Execute(CI_LAB_GetInputBuffer, Basic, NULL);

  return UT_GenStub_GetReturnValue(CI_LAB_GetInputBuffer, CFE_Status_t);
}
