// This code is for the IR emitter Module
// install the library before uploading the code
#include <Arduino.h>
#include <IRremote.h>

IRsend irsend ;

void setup( )
{
irsend.sendNEC(0x20DF10EF, 32); // This command is for POWER for Vizio
}

void loop( ) {
}
