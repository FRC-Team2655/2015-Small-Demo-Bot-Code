#include <arduino.h>

const unsigned long MAXINT = 0xFFFFFFFF;
const unsigned long DEFAULT_PULSE_WIDTH = 500; // ms = 1/2 second

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
	void setPulseWidth(int time) {
		_pulseWidth = time;
	}

	// set timeout
	// default = 2 periods
	void setTimeout(long timeout) {
		_timeout = timeout;
	}

	// reset timeout
	void kick() {
  		_endtime = millis() + _timeout;
    }
	
	bool pulseTimeExceeded() {
		return millis() > _endPulseTime;
	}
	
	// return true if timeout, false otherwise
	boolean timeout() {
	    return millis() > _endtime;
	}

	void ledOn();
	
	void toggle();
};
