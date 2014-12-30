#ifndef _CONTROLLER_H
#define _CONTROLLER_H

class Accelerometer;
class Button;
class Joystick;
class Radio;

class Controller {

private:
	Joystick *joy1;
	Joystick *joy2;
	Button *joy1Button;
	Button *joy2Button;

	Button *button1;
	Button *button2;
	Button *button3;
	Button *button4;
	Button *button5;

	Radio *_radio;
	Accelerometer *_acc;

public:

	Controller(Radio *radio);

	void run();
};

#endif // _CONTROLLER_H