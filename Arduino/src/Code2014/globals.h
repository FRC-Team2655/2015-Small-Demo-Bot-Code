#ifndef _GLOBALS_H
#define _GLOBALS_H

#include <arduino.h>
#include <pins_arduino.h>


// read the ROLE_PIN, 
// 		H=controller=not connected
//		L=ROBOT=connected to ground
#define ROBOT 0
#define CONTROLLER 1
//
// define the pins for the controller and robot
// it is ok to have the same pin assigned to two different pins
// 	once for the controller, once for the robot
//

// common hardware (both controller and robot have this)
#define ROLE_PIN A0
#define RADIO_SPI1 9
#define RADIO_SPI2 10
#define RADIO_PIN3 9
#define GYRO_PIN1 A12
#define GYRO_PIN2 Axxx
#define GYRO_PIN3 A14
//#define LED_BUILTIN A13

// controller only pins
#define JOYSTICK_1_X_PIN A1
#define JOYSTICK_1_Y_PIN A2
#define JOYSTICK_1_SWITCH_PIN A3
#define JOYSTICK_2_X_PIN A4
#define JOYSTICK_2_Y_PIN A5
#define JOYSTICK_2_SWITCH_PIN A6
#define BUTTON_1 A10
#define BUTTON_2 A11
#define BUTTON_3 A11
#define BUTTON_4 A11
#define BUTTON_5 A11

// radio only pins
#define MOTOR_A A12
#define MOTOR_B A13

// etc


// Single radio pipe address for the 2 nodes to communicate.
//const uint64_t pipe = 0xE8E8F0F0E1LL;


const unsigned long MAXINT = 0xFFFFFFFF;
const unsigned long DEFAULT_PULSE_WIDTH = 500; // ms = 1/2 second

#endif // _GLOBAL_H