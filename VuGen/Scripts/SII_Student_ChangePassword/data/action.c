Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_reg_find("Text=SII - Login Ui", 
		LAST);

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

	lr_think_time(39);

	lr_start_transaction("openURL");

	lr_end_transaction("openURL",LR_AUTO);

	lr_think_time(1000);

	lr_start_transaction("login");

	web_url("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?LinkId=141260", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=SII - Aplicaciones AplicacionesAlumno", 
		LAST);

	web_submit_data("index.php_2", 
		"Action=https://sii.itcelaya.edu.mx/sii/index.php?r=cruge/ui/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=cruge/ui/login", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=CrugeLogon[username]", "Value=08030379", ENDITEM, 
		"Name=CrugeLogon[password]", "Value=swatch001aren--", ENDITEM, 
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

	lr_end_transaction("login",LR_AUTO);

	lr_think_time(1000);

	lr_start_transaction("GoToChangePassOption");

	web_reg_find("Text=SII - Profile Site", 
		LAST);

	lr_think_time(50);

	web_url("Cambiar contraseña", 
		"URL=https://sii.itcelaya.edu.mx/sii/index.php?r=site/profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=alumno/aplicacionesAlumno/aplicaciones", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("line-03.gif", 
		"URL=https://sii.itcelaya.edu.mx/sii/images/line-03.gif", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=site/profile", 
		"Snapshot=t13.inf", 
		LAST);

	web_reg_find("Text=SII - Profile Site", 
		LAST);

	web_submit_data("index.php_3", 
		"Action=https://sii.itcelaya.edu.mx/sii/index.php?r=site/profile", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=site/profile", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=CrugeStoredUser[newPassword]", "Value=", ENDITEM, 
		"Name=submit", "Value=Guardar", ENDITEM, 
		LAST);

	lr_end_transaction("GoToChangePassOption",LR_AUTO);

	lr_think_time(1000);

	lr_start_transaction("1_transaction");

	web_reg_find("Text=SII - Profile Site", 
		LAST);

	lr_think_time(36);

	web_submit_data("index.php_4", 
		"Action=https://sii.itcelaya.edu.mx/sii/index.php?r=site/profile", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=site/profile", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=CrugeStoredUser[newPassword]", "Value=swatch001aren--", ENDITEM, 
		"Name=submit", "Value=Guardar", ENDITEM, 
		LAST);

	lr_end_transaction("1_transaction",LR_AUTO);

	lr_think_time(1000);

	lr_start_transaction("logout");

	web_reg_find("Text=SII - Logout Site", 
		LAST);

	web_url("Salir", 
		"URL=https://sii.itcelaya.edu.mx/sii/index.php?r=site/logoutSII", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_reg_find("Text=SII - Login Ui", 
		LAST);

	web_url("sii", 
		"URL=https://sii.itcelaya.edu.mx/sii/?r=cruge/ui/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("logout",LR_AUTO);

	lr_think_time(1000);

	lr_start_transaction("faileduser");

	web_reg_find("Text=SII - Login Ui", 
		LAST);

	lr_think_time(45);

	web_submit_data("index.php_5", 
		"Action=https://sii.itcelaya.edu.mx/sii/index.php?r=cruge/ui/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://sii.itcelaya.edu.mx/sii/index.php?r=cruge/ui/login", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=CrugeLogon[username]", "Value=08030380", ENDITEM, 
		"Name=CrugeLogon[password]", "Value=asdsdasdasdas", ENDITEM, 
		"Name=yt0", "Value=Aceptar", ENDITEM, 
		LAST);

	return 0;
}