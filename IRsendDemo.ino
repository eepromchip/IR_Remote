/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */
 #include <IRremote.h>
 #include <Arduino.h>

 IRsend irsend;

 void setup()
 {
 	pinMode(LED_BUILTIN, OUTPUT);

   Serial.begin(9600);
 }

 void loop() {
   if (Serial.read() != -1) {
     for (int i = 0; i < 3; i++) {
       irsend.sendNEC(20DF10EF, 32); // Vizio TV Power toggle
		 digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
		 	delay(100);                       // wait for a second
		digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
			delay(100);

     }
   }
 }
