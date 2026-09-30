/* Written by support/make_setup.sh -- regenerate, do not edit. */
void CI_LAB_AppMain_covmock_Register(void);
void CI_LAB_ReadUpLink_covmock_Register(void);
void CI_LAB_TaskInit_covmock_Register(void);
void CI_LAB_delete_callback_covmock_Register(void);
void UtTest_Setup(void)
{
    CI_LAB_AppMain_covmock_Register();
    CI_LAB_ReadUpLink_covmock_Register();
    CI_LAB_TaskInit_covmock_Register();
    CI_LAB_delete_callback_covmock_Register();
}
