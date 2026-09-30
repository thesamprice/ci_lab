/* Written by support/make_setup.sh -- regenerate, do not edit. */
void CI_LAB_ProcessGroundCommand_covmock_Register(void);
void CI_LAB_VerifyCmdLength_covmock_Register(void);
void UtTest_Setup(void)
{
    CI_LAB_ProcessGroundCommand_covmock_Register();
    CI_LAB_VerifyCmdLength_covmock_Register();
}
