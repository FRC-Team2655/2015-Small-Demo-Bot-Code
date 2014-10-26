#include "globals.h"
#include "joystick.h"
#include "button.h"

Joystick::Joystick(int xpin, int ypin, int bpin) {
	b = new Button(bpin);
}
int Joystick::get_x() {
	return 1;
}
int Joystick::get_y() {
	return 2;
}
int Joystick::get_button() {
	return 3;
}