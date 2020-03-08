#include<SoftwareSerial.h>

/* Create object named bt of the class SoftwareSerial */ 
SoftwareSerial bt(2,3); /* (Rx,Tx) */	

void setup() {
  bt.begin(9600);	/* Define baud rate for software serial communication */
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);
}

bool state;

void loop() {
  
    if (bt.available())	/* If data is available on serial port */
    {
      char input = bt.read();
      Serial.print(input);
      if(input == '1'){
        digitalWrite(LED_BUILTIN,HIGH);
      }
      else{
        digitalWrite(LED_BUILTIN,LOW);
      }
    }
}
