#include <arduino.h>

#include "globals.h"
#include "controller.h"
#include "joystick.h"
#include "button.h"
#include "radio.h"

Controller::Controller(Radio *radio) : _radio(radio) {

	Serial.println("Controller::Controller entered");

	joy1 = new Joystick(1,2,3);
	joy2 = new Joystick(1,2,3);

	joy1Button = new Button(1);
	joy2Button = new Button(1);

	button1  = new Button(1);
	button2 = new Button(1);
	button3 = new Button(1);
	button4 = new Button(1);
	button5 = new Button(1);
}

void Controller::run() {
    bool ok = false;
   //ok = radio.write( 4,5 );
    if (ok)
      printf("ok\n\r");
    else
      printf("failed\n\r");

  	if (button1->isPushed()) {

  	}
}