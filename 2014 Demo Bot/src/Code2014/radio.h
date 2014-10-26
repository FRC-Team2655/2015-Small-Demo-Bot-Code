#ifndef _RADIO_H
#define _RADIO_H

#include <arduino.h>
#include <pins_arduino.h>

#include <SPI.h>
#include "RF24_config.h"
#include "nRF24L01.h"
#include "RF24.h"

class Radio : public RF24 {

public:
	// Set up nRF24L01 radio on SPI bus plus pins 9 & 10
	Radio(uint8_t _cepin, uint8_t _cspin) : RF24( _cepin, _cspin) {};

	uint8_t get_status();

	void begin();
};


#endif // RADIO_H
