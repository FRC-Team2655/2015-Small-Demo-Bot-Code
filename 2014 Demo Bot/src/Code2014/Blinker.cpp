#include "blinker.h"
#include <arduino.h>


Blinker::Blinker(int led_pin):
    _multiplier(8),  _count(1), _timeout(MAXINT), _pulseWidth(DEFAULT_PULSE_WIDTH),
    _currentLedState(true), _endtime(MAXINT), _led_pin(led_pin),_led_state(HIGH),
	_endPulseTime(0)	{
	
	Serial.println("Blinker::Blinker entered");
    pinMode(_led_pin,OUTPUT);
          
    ledOn();
}

void Blinker::setSeriesBlinkCode(int multiplier, int count) {
		_multiplier = multiplier;
		_count = count;
		_tMuliplier = _tCount = 0;
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
