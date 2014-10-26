#ifndef _CONTROLLER_H
#define _CONTROLLER_H

class Joystick;
class Button;

class Controller {

private:
	Joystick *joy1;
	Joystick *joy2;
	Button *button1;
	Button *button2;

public:

	Controller();

	void run();
};

#endif // _CONTROLLER_H