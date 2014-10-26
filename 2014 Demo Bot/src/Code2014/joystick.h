#ifndef _JOYSTICK_H
#define _JOYSTICK_H

// #include "button.h"

class Button;

class Joystick {
private:
	Button *b;
	public:
	Joystick(int xpin, int ypin, int bpin);
	int get_x();
	int get_y();
	int get_button();
};

#endif // _JOYSTICK_H