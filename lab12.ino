#include <ESP8266.h>


#include <SoftwareSerial.h>
SoftwareSerial sSerial(11,10); //(RX,TX)

void setup() {
  sSerial.begin(115200);  
  Serial.begin(115200);    
  Serial.println("SoftSerial to ESP8266 AT commands test ...");
  }

void loop() {
  if (sSerial.available()) {  
    Serial.write(sSerial.read());  
  
    }
  if (Serial.available()) {  
    sSerial.write(Serial.read()); 
    }
  }
