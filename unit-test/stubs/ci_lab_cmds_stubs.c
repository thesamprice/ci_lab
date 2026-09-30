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
 * Auto-Generated stub implementations for functions defined in ci_lab_cmds
 * header
 */

#include "ci_lab_cmds.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for CI_LAB_NoopCmd()
 * ----------------------------------------------------
 */
CFE_Status_t CI_LAB_NoopCmd(const CI_LAB_NoopCmd_t *cmd) {
  UT_GenStub_SetupReturnBuffer(CI_LAB_NoopCmd, CFE_Status_t);

  UT_GenStub_AddParam(CI_LAB_NoopCmd, const CI_LAB_NoopCmd_t *, cmd);

  UT_GenStub_Execute(CI_LAB_NoopCmd, Basic, NULL);

  return UT_GenStub_GetReturnValue(CI_LAB_NoopCmd, CFE_Status_t);
}

/*
 * ----------------------------------------------------
 * Generated stub function for CI_LAB_ReadUplinkCmd()
 * ----------------------------------------------------
 */
CFE_Status_t CI_LAB_ReadUplinkCmd(const CI_LAB_ReadUplinkCmd_t *cmd) {
  UT_GenStub_SetupReturnBuffer(CI_LAB_ReadUplinkCmd, CFE_Status_t);

  UT_GenStub_AddParam(CI_LAB_ReadUplinkCmd, const CI_LAB_ReadUplinkCmd_t *,
                      cmd);

  UT_GenStub_Execute(CI_LAB_ReadUplinkCmd, Basic, NULL);

  return UT_GenStub_GetReturnValue(CI_LAB_ReadUplinkCmd, CFE_Status_t);
}

/*
 * ----------------------------------------------------
 * Generated stub function for CI_LAB_ResetCountersCmd()
 * ----------------------------------------------------
 */
CFE_Status_t CI_LAB_ResetCountersCmd(const CI_LAB_ResetCountersCmd_t *cmd) {
  UT_GenStub_SetupReturnBuffer(CI_LAB_ResetCountersCmd, CFE_Status_t);

  UT_GenStub_AddParam(CI_LAB_ResetCountersCmd,
                      const CI_LAB_ResetCountersCmd_t *, cmd);

  UT_GenStub_Execute(CI_LAB_ResetCountersCmd, Basic, NULL);

  return UT_GenStub_GetReturnValue(CI_LAB_ResetCountersCmd, CFE_Status_t);
}

/*
 * ----------------------------------------------------
 * Generated stub function for CI_LAB_SendHkCmd()
 * ----------------------------------------------------
 */
CFE_Status_t CI_LAB_SendHkCmd(const CI_LAB_SendHkCmd_t *cmd) {
  UT_GenStub_SetupReturnBuffer(CI_LAB_SendHkCmd, CFE_Status_t);

  UT_GenStub_AddParam(CI_LAB_SendHkCmd, const CI_LAB_SendHkCmd_t *, cmd);

  UT_GenStub_Execute(CI_LAB_SendHkCmd, Basic, NULL);

  return UT_GenStub_GetReturnValue(CI_LAB_SendHkCmd, CFE_Status_t);
}
