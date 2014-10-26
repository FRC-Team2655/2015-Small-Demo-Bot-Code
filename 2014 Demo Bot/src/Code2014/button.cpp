#include "globals.h"
#include "button.h"

Button::Button(int pin) : _pin(pin) {

	pinMode(_pin,INPUT_PULLUP);
}
bool Button::state() {
	return false;
	// return digitalPinRead(_pin) ? 1 : 0;
}
