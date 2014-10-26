#include <arduino.h>
#include "globals.h"
#include "radio.h"

#include <SPI.h>

// Single radio pipe address for the 2 nodes to communicate.
//const uint64_t pipe = 0xE8E8F0F0E1LL;
//Radio::Radio( uint8_t _cepin, uint8_t _cspin) : RF24(uint8_t  _cepin, uint8_t   _cspin) {
//
//}

uint8_t Radio::get_status() {
    // read the radio status to see if we really have a radio
    uint8_t status = RF24::get_status();
    
    Serial.print("Status: ");
    Serial.println(status,HEX);

    //print_status(status);
    //printDetails();
    return (uint8_t)0x01;
}

void Radio::begin() {
	// if there is data ready
	if ( available() )
	{
        // Dump the payloads until we've gotten everything
		bool done = false;
		while (!done)
		{
	        // Fetch the payload, and see if this was the last one.
	        //done = radio.read( button_states, num_button_pins );
		}
	}
	//openWritingPipe(pipe);
    //openReadingPipe(1,pipe);
}
