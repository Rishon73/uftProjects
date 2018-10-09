//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	return 0;
}

Action()
{
	truclient_step("1", "Tap on Menu Button", "snapshot=Action_1.inf");
	lr_start_transaction("01_login");
	truclient_step("2", "Select row 0 section 0 at Table (0) Table", "snapshot=Action_2.inf");
	truclient_step("3", "Set Focus on USER NAME Input", "snapshot=Action_3.inf");
	truclient_step("4", "Set Text Shahar in Shahar Input", "snapshot=Action_4.inf");
	truclient_step("5", "Set Focus on PASSWORD Input", "snapshot=Action_5.inf");
	truclient_step("6", "Set Text ********* in Password1 Input", "snapshot=Action_6.inf");
	truclient_step("7", "Tap on LOGIN Button", "snapshot=Action_7.inf");
	lr_end_transaction("01_login",0);
	truclient_step("8", "Wait 2 seconds", "snapshot=Action_8.inf");
	lr_start_transaction("02_select_and _put_in_cart");
	truclient_step("9", "Tap on HEADPHONES Label", "snapshot=Action_9.inf");
	truclient_step("10", "Using application StartApp", "snapshot=Action_10.inf");
	truclient_step("11", "Select item 0 , section 0 at CollectionView (1) CollectionView", "snapshot=Action_11.inf");
	truclient_step("12", "Wait 2 seconds", "snapshot=Action_12.inf");
	truclient_step("13", "Using application StartApp", "snapshot=Action_13.inf");
	truclient_step("14", "Tap on ADD TO CART Button", "snapshot=Action_14.inf");
	lr_end_transaction("02_select_and _put_in_cart",0);
	truclient_step("15", "Using application StartApp", "snapshot=Action_15.inf");
	truclient_step("16", "Using application Other ( Home )", "snapshot=Action_16.inf");
	lr_start_transaction("03_checkout_and_pay");
	truclient_step("17", "Tap on cartItem Button", "snapshot=Action_17.inf");
	truclient_step("18", "Using application StartApp", "snapshot=Action_18.inf");
	truclient_step("19", "Tap on CHECKOUT (PAY 179.99) Button", "snapshot=Action_19.inf");
	truclient_step("20", "Using application StartApp", "snapshot=Action_20.inf");
	truclient_step("21", "Tap on PAY NOW Button", "snapshot=Action_21.inf");
	truclient_step("22", "Tap on Ok Button", "snapshot=Action_22.inf");
	lr_end_transaction("03_checkout_and_pay",0);
	truclient_step("23", "Using application StartApp", "snapshot=Action_23.inf");
	lr_start_transaction("04_sign_out");
	truclient_step("24", "Tap on Menu Button", "snapshot=Action_24.inf");
	truclient_step("25", "Using application Other ( Home )", "snapshot=Action_25.inf");
	truclient_step("26", "Select row 0 section 0 at Table (0) Table", "snapshot=Action_26.inf");
	truclient_step("27", "Using application StartApp", "snapshot=Action_27.inf");
	truclient_step("28", "Using application Other ( Home )", "snapshot=Action_28.inf");
	truclient_step("29", "Tap on Yes Button", "snapshot=Action_29.inf");
	lr_end_transaction("04_sign_out",0);

	return 0;
}

vuser_end()
{
	return 0;
}
