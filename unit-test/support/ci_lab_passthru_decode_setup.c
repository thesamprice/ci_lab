/* Written by support/make_setup.sh -- regenerate, do not edit. */
void CI_LAB_DecodeInputMessage_covmock_Register(void);
void CI_LAB_GetInputBuffer_covmock_Register(void);
void UtTest_Setup(void)
{
    CI_LAB_DecodeInputMessage_covmock_Register();
    CI_LAB_GetInputBuffer_covmock_Register();
}
