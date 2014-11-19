#ifndef _BLINKER_H
#define _BLINKER_H

#include <arduino.h>

// another stupid  comment by team thursday

class Blinker {
	private:

		int _multiplier;
		int _count;
		unsigned long _timeout;
		int _pulseWidth;
		bool _currentLedState;		
		unsigned long _endtime;
		int _led_pin;
		int _led_state;
		unsigned long _endPulseTime;
		
		int _tMuliplier;
		int _tCount;
		
	public:

	Blinker() {};
	
	// construct and connect to LED pin
	Blinker(int led_pin);
	// led pin is arduino led pin
	// default series blink code = setSeriesBlinkCode(8,1);
	// default timeout = MAXINT	
	// blink the light if not timed out

	void blink();
	
	// setup to start series of blink codes
	// blink "multiplier" groups of "count" blinks
	void setSeriesBlinkCode(int multiplier, int count);
	
	// set period
	// default = 1 second (1/2 on, 1/2 off)
	void inline setPulseWidth(int time) {
		_pulseWidth = time;
	}

	// set timeout
	// default = 2 periods
	void inline setTimeout(long timeout) {
		_timeout = timeout;
	}

	// reset timeout
	void inline kick() {
  		_endtime = millis() + _timeout;
    }
	
	bool inline pulseTimeExceeded() {
		return millis() > _endPulseTime;
	}
	
	// return true if timeout, false otherwise
	boolean inline timeout() {
	    return millis() > _endtime;
	}

	void ledOn();
	
	void toggle();
};

#endif // _BLINKER_H