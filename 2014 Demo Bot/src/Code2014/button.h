#ifndef _BUTTON_H
#define _BUTTON_H

class Button {
private:
	bool _pin;
public:
	Button(int pin);
	bool state();
};

#endif // _BUTTON_H