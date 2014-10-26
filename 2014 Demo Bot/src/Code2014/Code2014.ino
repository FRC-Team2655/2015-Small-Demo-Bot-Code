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
#include <pins_arduino.h>
#include <arduino.h>
#include "globals.h"

#include "blinker.h"
#include "robot.h"
#include "controller.h"
#include "radio.h"
//#include "role.h"

// make a blinker
Blinker blinky(LED_BUILTIN);

// make a radio
Radio *radio; // radio(9,10); // RADIO_SPI1,RADIO_SPI2);

// get ready to build a robot
Robot *robot = NULL;
// or the controller
Controller *controller = NULL;

void setup(void) {

    Serial.begin(9600);

    radio = new Radio(9,10);
    
    radio->begin();

    pinMode(ROLE_PIN, INPUT_PULLUP);

    if (digitalRead(ROLE_PIN) == CONTROLLER) {
        controller = new Controller();
    } else {
        robot = new Robot();
    }
}

//
// Loop
//

void loop(void)
{
    if (controller != NULL) {
        controller->run();
    } else {
        robot->run();
    }

    // OR
    // controller ? controller->run() : robot->run();
}