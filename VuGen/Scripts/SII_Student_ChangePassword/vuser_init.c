/*
SII_Student_ChangePass_00_openURL
SII_Student_ChangePass_01_login
SII_Student_ChangePass_02_ClickChangePassOption
SII_Student_ChangePass_03_UpdatePassword
SII_Student_ChangePass_04_logout
 */
void ShowElapsedTime(char * TransactionName)
{
	time_elapsed = lr_end_timer(timer);

	if (ShowFlag == 1)	
	{
		lr_message("\t %s \t %f \t %s",lr_eval_string("{timestamp}"), time_elapsed, TransactionName);
	}
}

vuser_init()
{
	ShowFlag = 1;
	
	/*if (ShowFlag == 1){
		lr_message( "\t" );
		lr_message( "\t %s SII_Student_ChangePassword, iteration No %s ", lr_eval_string("{timestamp}"), lr_eval_string("{iteration}") );
		lr_message( "\t ******************************************************************************" );
		lr_message( "\t *  NumControl : %s",lr_eval_string("{NumControl}    ") );
		lr_message( "\t *  Password   : %s",lr_eval_string("{Password}  ") );
		lr_message( "\t ********************************                " );
	}*/ 
	return 0;
}
