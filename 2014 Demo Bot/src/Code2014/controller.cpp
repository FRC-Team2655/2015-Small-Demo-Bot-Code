#include "globals.h"

#include "controller.h"

#include <arduino.h>

#include "joystick.h"
#include "button.h"

Controller::Controller() {

	Serial.println("Controller::Controller entered");

  joy1 = new Joystick(1,2,3);
  joy2 = new Joystick(1,2,3);
}

void Controller::run() {
    bool ok = false;
   //ok = radio.write( 4,5 );
    if (ok)
      printf("ok\n\r");
    else
      printf("failed\n\r");
}