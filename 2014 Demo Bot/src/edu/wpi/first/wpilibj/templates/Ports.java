package edu.wpi.first.wpilibj.templates;
    
public class Ports {
//  Digital SideCar PWM/////////////////////////////////////////////////////////
    public final static int leftDriveMotor = DSCPWM.ch1;
    public final static int rightDriveMotor = DSCPWM.ch2;
////////////////////////////////////////////////////////////////////////////////
    
//  Digital SideCar DIO/////////////////////////////////////////////////////////
    public final static int pressureSwitchChannel = Ports.DSCDIO.ch1;
////////////////////////////////////////////////////////////////////////////////

//  Digital SideCar Relays//////////////////////////////////////////////////////
    public final static int compressorMotorControlChannel = Ports.DSCRelay.ch1;
////////////////////////////////////////////////////////////////////////////////    
    
/// Analog Module///////////////////////////////////////////////////////////////   
    public final static int gyroChannel = Ports.AM.ch1;
    public final static int airTankPressureSensorChannel = Ports.AM.ch4;
////////////////////////////////////////////////////////////////////////////////
    
    // Digital SideCar Relay channels
    public final static class DSCRelay {
        public final static int ch1 = 1, ch2 = 2, ch3 = 3, ch4 = 4;
        public final static int ch5 = 5, ch6 = 6, ch7 = 7, ch8 = 8;
    }

    // Digital SideCar PWM channels
    public final static class DSCPWM {
        public final static int ch1 = 1, ch2 = 2, ch3 = 3, ch4 = 4;
        public final static int ch5 = 5, ch6 = 6, ch7 = 7, ch8 = 8;
        public final static int ch9 = 9, ch10 = 10;
    }

    // Digital SideCar DIO channels
    public final static class DSCDIO {
        public final static int ch1 = 1, ch2 = 2, ch3 = 3, ch4 = 4;
        public final static int ch5 = 5, ch6 = 6, ch7 = 7, ch8 = 8;
        public final static int ch9 = 9, ch10 = 10, ch11 = 11, ch12 = 12;
        public final static int ch13 = 13, ch14 = 14;
    }

    // Solenoid Module channels
    public final static class SM {
        public final static int ch1 = 1, ch2 = 2, ch3 = 3, ch4 = 4;
        public final static int ch5 = 5, ch6 = 6, ch7 = 7, ch8 = 8;
    }

    // Analog Module channels
    public final static class AM {
        public final static int ch1 = 1, ch2 = 2, ch3 = 3, ch4 = 4;
        public final static int ch5 = 5, ch6 = 6, ch7 = 7, ch8 = 8;
    }
}
