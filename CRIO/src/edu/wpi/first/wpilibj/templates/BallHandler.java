package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.smartdashboard.SmartDashboard;

public class BallHandler {

    CompressorSystem ballHandlerCompressor;
    Lifter lifter;
    FlyWheel flyWheel;
    
    private int airTankRefreshWait;
    
    private double flyWheelSpeed;
    
    BallHandler() {
        ballHandlerCompressor = new CompressorSystem();
        lifter = new Lifter();
        flyWheel = new FlyWheel();
        airTankRefreshWait = 0;
        flyWheelSpeed = 0;
    }

    public void shoot() {
        flyWheelSpeed = flyWheel.getSpeed();
        if (flyWheelSpeed > 0 && flyWheelSpeed <= 1) {
            lifter.raiseTheBall();
        } else {
            SmartDashboard.putNumber("Failure to shoot!!! The motor is off", flyWheelSpeed);
        }
    }

    public void displayPressure() {
        airTankRefreshWait++;

        if (airTankRefreshWait == 100) {
            SmartDashboard.putNumber("Tank PSI", ballHandlerCompressor.getPressure());
            SmartDashboard.putNumber("Tank PSI Raw Data", ballHandlerCompressor.getPressure());
            airTankRefreshWait = 0;
        }
    }
}
