#include "Keyboard.h"

void setup() {
//==================================================================================================================
pinMode(6, INPUT_PULLUP);
if (digitalRead(6) == LOW){
while(1);
}


//==================================================================================================================
pinMode(7, INPUT_PULLUP);
if (digitalRead(7) == LOW){
  delay(1000);
  CommandAtRunBarMSWIN("notepad");
  delay(500);
  Keyboard.println("PIN 7 ARDUINO ON");
  delay(500);
  while(1);
}


//==================================================================================================================
pinMode(8, INPUT_PULLUP);
if (digitalRead(8) == LOW){

}


//==================================================================================================================
pinMode(9, INPUT_PULLUP);
if (digitalRead(9) == LOW){

}
  
  
  
  
  // put your setup code here, to run once:
  Keyboard.begin();

}

void loop() {

}

void CommandAtRunBarMSWIN(char *SomeCommand){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print(SomeCommand);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

void CommandAtRunBarGnome(char *SomeCommand){
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  delay(100);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print(SomeCommand);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}
