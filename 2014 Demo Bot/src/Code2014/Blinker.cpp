#include "blinker.h"

Blinker::Blinker(int led_pin):
    _multiplier(8),  _count(1), _timeout(MAXINT), _pulseWidth(DEFAULT_PULSE_WIDTH),
    _currentLedState(true), _endtime(MAXINT), _led_pin(led_pin),_led_state(HIGH),
	_endPulseTime(0)
	{
    pinMode(_led_pin,OUTPUT);
          
    ledOn();
}
	
// blink the light if not timed out
void Blinker::blink() {
	if (timeout()) {
		ledOn();
		return;
	}
	if (pulseTimeExceeded()) {
		toggle();
	}
}
void Blinker::ledOn() {
	_led_state = HIGH;
	digitalWrite(_led_pin, _led_state);
	_timeout = MAXINT;
}

void Blinker::toggle() {
	_led_state = (_led_state == HIGH ? LOW : HIGH);
	digitalWrite(_led_pin, _led_state);
	_endPulseTime = millis() + _pulseWidth;
}
