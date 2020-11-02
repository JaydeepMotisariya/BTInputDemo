extern "C" {
  #include <stdlib.h>
}
#define ARRAY_SIZE(array) ((sizeof(array))/(sizeof(array[0])))
#include <iostream>
#include <cstring>


char rx_byte[100];
String ascii_msg;
String str_msg;
int str_len;

void setup() {
  Serial.begin(9600);
}


void loop() {
  if (Serial.available() > 0) {    // is a character available?
    ascii_msg = Serial.read();
    //Copy every character
    std::strncpy(rx_byte, ascii_msg.c_str(), sizeof(rx_byte));
    Serial.print(ascii_msg); 
  } // end: if (Serial.available() > 0)
}
