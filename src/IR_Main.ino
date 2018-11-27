// This code is for the IR emitter Module
// install the library before uploading the code
#include < IRremote.h >

IRsend irsend ;

void setup( )
{
irsend.sendNEC(0x20dfc03f, 32); // This command is for volume up
}

void loop( ) {
}
