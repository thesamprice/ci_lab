/* Written by support/make_setup.sh -- regenerate, do not edit. */
void CI_LAB_NoopCmd_covmock_Register(void);
void CI_LAB_ReadUplinkCmd_covmock_Register(void);
void CI_LAB_ResetCountersCmd_covmock_Register(void);
void CI_LAB_SendHkCmd_covmock_Register(void);
void UtTest_Setup(void)
{
    CI_LAB_NoopCmd_covmock_Register();
    CI_LAB_ReadUplinkCmd_covmock_Register();
    CI_LAB_ResetCountersCmd_covmock_Register();
    CI_LAB_SendHkCmd_covmock_Register();
}
