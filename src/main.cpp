//Créé par Dakhay

#include <Arduino.h>
#include <DigiKeyboard.h>
#include <DigiKeyboardFr.h>

void setup() {
    
}

void loop() {

DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_GUI_LEFT) ; 
DigiKeyboardFr.delay(500) ; 

DigiKeyboardFr.print("terminal"); 
DigiKeyboardFr.delay(500) ; 

DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
DigiKeyboardFr.delay(500) ;

DigiKeyboardFr.print("echo Hack the Planet"); 
DigiKeyboardFr.delay(500); 

DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
DigiKeyboardFr.delay(5000) ;
}

