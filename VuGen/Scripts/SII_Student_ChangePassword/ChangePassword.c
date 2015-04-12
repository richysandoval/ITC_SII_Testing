ChangePassword()
{
	if (ShowFlag == 1){
		lr_message( "\t" );
		lr_message( "\t ******************************************************************************" );
		lr_message( "\t %s SII_Student_ChangePassword, iteration No %s ", lr_eval_string("{timestamp}"), lr_eval_string("{iteration}") );
		lr_message( "\t ******************************************************************************" );
		lr_message( "\t *  NumControl   : %s",lr_eval_string("{NumControl}    ") );
		lr_message( "\t *  Password     : %s",lr_eval_string("{Password}  ") );
		lr_message( "\t *  New Password : %s",lr_eval_string("{NewPassword}  ") );
		lr_message( "\t ********************************                " );
	} 
	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	
	web_reg_find("Text=SII - Login Ui",
		LAST);
	
	lr_think_time(1);
	
timer = lr_start_timer( ); lr_start_transaction("SII_Student_ChangePass_00_openURL");

	web_url("index.php", 
		"URL=https://sii.itcelaya.edu.mx/sii/index.php?r=cruge/ui/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("fontawesome-webfont.eot", 
		"URL=https://sii.itcelaya.edu.mx/sii/font-awesome/fonts/fontawesome-webfont.eot?", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/vnd.ms-fontobject", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=cruge/ui/login", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("glyphicons-halflings-regular.eot", 
		"URL=https://sii.itcelaya.edu.mx/sii/fonts/glyphicons-halflings-regular.eot?", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/vnd.ms-fontobject", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=cruge/ui/login", 
		"Snapshot=t3.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

lr_end_transaction("SII_Student_ChangePass_00_openURL",LR_AUTO);
ShowElapsedTime("SII_Student_ChangePass_00_openURL");
	
	//<div class="alert alert-danger">Usuario o contraseña incorrecto</div>
	web_reg_save_param_ex(
		"ParamName=UserMessageInvalid",
		"LB=<div class=\"alert alert-danger\">",
		"RB=</div>",
		"NotFound=warning",
		SEARCH_FILTERS,
		"Scope=All",
		"IgnoreRedirections=Yes",
		LAST);
		
	lr_think_time(1);
	//web_reg_find("Text=SII - Aplicaciones AplicacionesAlumno", 
	//LAST);

timer = lr_start_timer( ); lr_start_transaction("SII_Student_ChangePass_01_login");

	web_submit_data("index.php_2", 
		"Action=https://sii.itcelaya.edu.mx/sii/index.php?r=cruge/ui/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=cruge/ui/login", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=CrugeLogon[username]", "Value={NumControl}", ENDITEM, 
		"Name=CrugeLogon[password]", "Value={Password}", ENDITEM, 
		"Name=yt0", "Value=Aceptar", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("jquery.fancybox-1.3.4.pack.js", 
		"URL=https://sii.itcelaya.edu.mx/sii/fancybox/jquery.fancybox-1.3.4.pack.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=alumno/aplicacionesAlumno/aplicaciones", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("jquery.easing-1.3.pack.js", 
		"URL=https://sii.itcelaya.edu.mx/sii/fancybox/jquery.easing-1.3.pack.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=alumno/aplicacionesAlumno/aplicaciones", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("jquery.dataTables.css", 
		"URL=https://sii.itcelaya.edu.mx/sii/datatables/css/jquery.dataTables.css", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=alumno/aplicacionesAlumno/aplicaciones", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("alertify.core.css", 
		"URL=https://sii.itcelaya.edu.mx/sii/alertify/alertify.core.css", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=alumno/aplicacionesAlumno/aplicaciones", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("blank.gif", 
		"URL=https://sii.itcelaya.edu.mx/sii/fancybox/blank.gif", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=alumno/aplicacionesAlumno/aplicaciones", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("fancybox.png", 
		"URL=https://sii.itcelaya.edu.mx/sii/fancybox/fancybox.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=alumno/aplicacionesAlumno/aplicaciones", 
		"Snapshot=t11.inf", 
		LAST);

	web_concurrent_end(NULL);
	
	
	//Verify that the user's login is correct
	if(strcmp(lr_eval_string("{UserMessageInvalid}"),"Usuario o contraseÃ±a incorrecto") == 0){
		//trans fail
		lr_error_message("SII Login - User or Password invalid for Username:[%s] Password:[%s]", lr_eval_string("{NumControl}"), lr_eval_string("{Password}"));
		lr_end_transaction("SII_Student_ChangePass_01_login",LR_FAIL);
		lr_exit( LR_EXIT_ITERATION_AND_CONTINUE,LR_FAIL );
	}

lr_end_transaction("SII_Student_ChangePass_01_login",LR_AUTO);
ShowElapsedTime("SII_Student_ChangePass_01_login");
	





	web_reg_find("Text=SII - Profile Site", 
	LAST);
	
	lr_think_time(1);
	
timer = lr_start_timer( ); lr_start_transaction("SII_Student_ChangePass_02_ClickChangePassOption");

	web_url("Cambiar contraseña", 
		"URL=https://sii.itcelaya.edu.mx/sii/index.php?r=site/profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=alumno/aplicacionesAlumno/aplicaciones", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("SII_Student_ChangePass_02_ClickChangePassOption",LR_AUTO);
ShowElapsedTime("SII_Student_ChangePass_02_ClickChangePassOption");



	
	//<div class="alert alert-success">Actualización de contraseña</div>
	web_reg_save_param_ex(
		"ParamName=PassUpdated",
		"LB=<div class=\"alert alert-success\">",
		"RB=</div>",
		"NotFound=warning",
		SEARCH_FILTERS,
		"Scope=All",
		"IgnoreRedirections=Yes",
		LAST);
	
	//<div class="alert alert-danger">Contraseña debil.</div>
	web_reg_save_param_ex(
		"ParamName=ErrorMessage",
		"LB=<div class=\"alert alert-danger\">",
		"RB=</div>",
		"NotFound=warning",
		SEARCH_FILTERS,
		"Scope=All",
		"IgnoreRedirections=Yes",
		LAST);
	
	
	web_reg_find("Text=SII - Profile Site",
	LAST);

	lr_think_time(1);
timer = lr_start_timer( ); lr_start_transaction("SII_Student_ChangePass_03_UpdatePassword");

	web_submit_data("index.php_4", 
		"Action=https://sii.itcelaya.edu.mx/sii/index.php?r=site/profile", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=site/profile", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=CrugeStoredUser[newPassword]", "Value={NewPassword}", ENDITEM, 
		"Name=submit", "Value=Guardar", ENDITEM, 
		LAST);
		
	//lr_message("message: %s",lr_eval_string("{PassUpdated}"));
	//lr_message("message: %s",lr_eval_string("{ErrorMessage}"));
	
	if(strcmp(lr_eval_string("{PassUpdated}"),"ActualizaciÃ³n de contraseÃ±a") != 0){		
		if(strcmp(lr_eval_string("{ErrorMessage}"),"") != 0){
			lr_error_message("SII Pass updated - System shows error message: '[%s]' for :[%s] Password:[%s]", lr_eval_string("{ErrorMessage}"), lr_eval_string("{NumControl}"), lr_eval_string("{NewPassword}"));
			lr_end_transaction("SII_Student_ChangePass_03_UpdatePassword",LR_FAIL);
			goto logout;
		}
		else{
			lr_error_message("SII Pass updated - System Error: Invalid Password or internal server error for Username:[%s] Password:[%s]", lr_eval_string("{NumControl}"), lr_eval_string("{Password}"));
			lr_end_transaction("SII_Student_ChangePass_03_UpdatePassword",LR_FAIL);
			lr_exit( LR_EXIT_ITERATION_AND_CONTINUE,LR_FAIL );
		}
	}

lr_end_transaction("SII_Student_ChangePass_03_UpdatePassword",LR_AUTO);
ShowElapsedTime("SII_Student_ChangePass_03_UpdatePassword");



logout:
	lr_think_time(1);

timer = lr_start_timer( ); lr_start_transaction("SII_Student_ChangePass_04_logout");

/*	web_url("LogOut", 
		"URL=https://gacela.itc.mx/sii/close_session.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Mode=HTML", 
		LAST);
*/
	
	web_set_sockets_option("SSL_VERSION", "3");
	
	web_url("Salir", 
		"URL=https://sii.itcelaya.edu.mx/sii/index.php?r=site/logoutSII", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	//web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("sii", 
		"URL=https://sii.itcelaya.edu.mx/sii/?r=cruge/ui/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("SII_Student_ChangePass_04_logout",LR_AUTO);
ShowElapsedTime("SII_Student_ChangePass_04_logout");



	return 0;
}