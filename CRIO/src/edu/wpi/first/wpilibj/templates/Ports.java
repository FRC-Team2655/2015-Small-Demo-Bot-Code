package edu.wpi.first.wpilibj.templates;

/**
 *
 * @author magic_000
 */
public final class Ports {

    // PWM channels
    public final static int rightMotorChannel = Ports.DSCPWM.ch1;
    public final static int leftMotorChannel = Ports.DSCPWM.ch2;
    public final static int flyWheelMotorChannel = Ports.DSCPWM.ch3;
//    public final static int unusedPWMChannel_4 = Ports.DSCPWM.ch4;
//    public final static int unusedPWMChannel_5 = Ports.DSCPWM.ch5;
//    public final static int unusedPWMChannel_6 = Ports.DSCPWM.ch6;
//    public final static int unusedPWMChannel_7 = Ports.DSCPWM.ch7;
//    public final static int unusedPWMChannel_8 = Ports.DSCPWM.ch8;
//    public final static int unusedPWMChannel_9 = Ports.DSCPWM.ch9;
//    public final static int unusedPWMChannel_10 = Ports.DSCPWM.ch10;

    // Digital SideCar DIO
    public final static int pressureSwitchChannel = Ports.DSCDIO.ch1;
    public final static int backLeftTurretLimitSwitchChannel = Ports.DSCDIO.ch2;
    public final static int backRightTurretLimitSwitchChannel = Ports.DSCDIO.ch3;
//    public final static int unusedDIOChannel_4 = Ports.DSCDIO.ch4;
//    public final static int unusedDIOChannel_5 = Ports.DSCDIO.ch5;
//    public final static int unusedDIOChannel_6 = Ports.DSCDIO.ch6;
//    public final static int unusedDIOChannel_7 = Ports.DSCDIO.ch7;
//    public final static int unusedDIOChannel_8 = Ports.DSCDIO.ch8;
//    public final static int unusedDIOChannel_9 = Ports.DSCDIO.ch9;
//    public final static int unusedDIOChannel_10 = Ports.DSCDIO.ch10;
//    public final static int unusedDIOChannel_8 = Ports.DSCDIO.ch11;
//    public final static int unusedDIOChannel_9 = Ports.DSCDIO.ch12;
//    public final static int unusedDIOChannel_10 = Ports.DSCDIO.ch13;
//    public final static int unusedDIOChannel_10 = Ports.DSCDIO.ch14;

    // Digital SideCar Relays
    public final static int compressorMotorControlChannel = Ports.DSCRelay.ch1;
    public final static int turretRotationMotorChannel = Ports.DSCRelay.ch2;
//    public final static int unusedRelayChannel_3 = Ports.DSCRelay.ch3;
//    public final static int unusedRelayChannel_4 = Ports.DSCRelay.ch4;
//    public final static int unusedRelayChannel_5 = Ports.DSCRelay.ch5;
//    public final static int unusedRelayChannel_6 = Ports.DSCRelay.ch6;
//    public final static int unusedRelayChannel_7 = Ports.DSCRelay.ch7;
//    public final static int unusedRelayChannel_8 = Ports.DSCRelay.ch8;

    // solenoid module 1
//    public final static int unusedSMChannel_1 = Ports.SM.ch1;
//    public final static int unusedSMChannel_2 = Ports.SM.ch2;
//    public final static int unusedSMChannel_3 = Ports.SM.ch3;
//    public final static int unusedSMChannel_4 = Ports.SM.ch4;
//    public final static int unusedSMChannel_5 = Ports.SM.ch5;
//    public final static int unusedSMChannel_6 = Ports.SM.ch6;
//    public final static int unusedSMChannel_7 = Ports.SM.ch7;
//    public final static int unusedSMChannel_8 = Ports.SM.ch8;
    // Analog Module 1
    public final static int airTankPressureSensorChannel = Ports.AM.ch1;
//    public final static int unusedAMChannel_2 = Ports.AM.ch2;
//    public final static int unusedAMChannel_3 = Ports.AM.ch3;
//    public final static int unusedAMChannel_4 = Ports.AM.ch4;
//    public final static int unusedAMChannel_5 = Ports.AM.ch5;
//    public final static int unusedAMChannel_6 = Ports.AM.ch6;
//    public final static int unusedAMChannel_7 = Ports.AM.ch7;
//    public final static int unusedAMChannel_8 = Ports.AM.ch8;
    // Analog Module 2
    // TODO add current (amperage) sensors
//    public final static int unusedAM2Channel_1 = Ports.AM.ch1;
//    public final static int unusedAM2Channel_2 = Ports.AM.ch2;
//    public final static int unusedAM2Channel_3 = Ports.AM.ch3;
//    public final static int unusedAM2Channel_4 = Ports.AM.ch4;
//    public final static int unusedAM2Channel_5 = Ports.AM.ch5;
//    public final static int unusedAM2Channel_6 = Ports.AM.ch6;
//    public final static int unusedAM2Channel_7 = Ports.AM.ch7;
//    public final static int unusedAM2Channel_8 = Ports.AM.ch8;
//    public final static int AnalogModule1 = Ports.cRIOModule.module1;
//    public final static int AnalogModule2 = Ports.cRIOModule.module2;
    // Module Numbers

    public final static class cRIOModule {

        public final static int module1 = 1;
        public final static int module2 = 2;
    }

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
