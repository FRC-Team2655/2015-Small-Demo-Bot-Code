/**
 * This is the code file for Demo 2014
 *
 * This file contains both the controller (remote) side as well as
 * the robot (hardware) side.
 *
 * On the 'remote', connect any number of buttons or switches from
 * an arduino pin to ground.  Update 'button_pins' to reflect the
 * pins used.
 *
 * On the 'led' board, connect the same number of LED's from an
 * arduino pin to a resistor to ground.  Update 'led_pins' to reflect
 * the pins used.  Also connect a separate pin to ground and change
 * the 'role_pin'.  This tells the sketch it's running on the LED board.
 *
 * Every time the buttons change on the remote, the entire state of
 * buttons is send to the led board, which displays the state.
 */

#include <SPI.h>
#include "RF24_config.h"
#include "nRF24L01.h"
#include "RF24.h"
#include "printf.h"

#include "blinker.h"
//
// Hardware configuration
//

const int role_pin = A0;

// Single radio pipe address for the 2 nodes to communicate.
const uint64_t pipe = 0xE8E8F0F0E1LL;


#define CONTROLLER 1
#define ROBOT 0

Blinker blinky(LED_BUILTIN);
boolean role = CONTROLLER;

// Set up nRF24L01 radio on SPI bus plus pins 9 & 10
RF24 radio(9,10);

void setup(void)
{
    Serial.begin(9600);
	
	radio.begin();

    blinky.ledOn();
	delay(1000);
	blinky.toggle();
	delay(1000);
	blinky.toggle();


    // read the radio status to see if we really have a radio
    uint8_t status = radio.get_status();
	
	Serial.print("Status: ");
	Serial.println(status,HEX);
	
	return;	
    //radio.print_status(status);
    //radio.printDetails();

    // set up the role pin
    pinMode(role_pin, INPUT_PULLUP);
    role = digitalRead(role_pin);

    // blink to indicate which mode we are setting up for

    //blinky.setSeriesBlinkCode(2,role == CONTROLLER?5:3);
    if (role == CONTROLLER) {
        // set up to read (2) joysticks and it's button
        // set up to read (5) buttons
        // (future) set up to read gyro

    } 
    else { // ROBOT side
        // robot side

    }
	Serial.println(role == CONTROLLER ? "CONTROLLER" : "ROBOT");
    //
    // Print preamble
    //


    //printf_begin();

    //
    // Setup and configure rf radio
    //

    //radio.begin();

    //
    // Open pipes to other nodes for communication
    //

    // This simple sketch opens a single pipes for these two nodes to communicate
    // back and forth.  One listens on it, the other talks to it.
return;
    if ( role == CONTROLLER )
    {
        radio.openWritingPipe(pipe);
    }
    else
    {
        radio.openReadingPipe(1,pipe);
    }

    //
    // Start listening
    //

    if ( role == ROBOT )
        radio.startListening();

    //
    // Dump the configuration of the rf unit for debugging
    //




}

//
// Loop
//

void loop(void)
{
    //
    // Remote role.  If the state of any button has changed, send the whole state of
    // all buttons.
    //
	blinky.blink();
	//Serial.println(role == CONTROLLER ? "CONTROLLER" : "ROBOT");
    return;

    if ( role == CONTROLLER )
    {
        bool ok = false;
        //ok = radio.write( 4,5 );
        if (ok)
            printf("ok\n\r");
        else
            printf("failed\n\r");

        return;
    }


    if ( role == ROBOT )
    {
        // if there is data ready
        if ( radio.available() )
        {
            // Dump the payloads until we've gotten everything
            bool done = false;
            while (!done)
            {
                // Fetch the payload, and see if this was the last one.
                //done = radio.read( button_states, num_button_pins );

                printf("Got buttons\n\r");

            }
        }
    }
}


