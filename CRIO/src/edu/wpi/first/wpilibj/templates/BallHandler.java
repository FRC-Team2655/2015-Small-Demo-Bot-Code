package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.smartdashboard.SmartDashboard;

public class BallHandler {

    CompressorSystem ballHandlerCompressor;
    Lifter lifter;
    FlyWheel flyWheel;
    private int airTankRefreshWait;

    BallHandler() {
        ballHandlerCompressor = new CompressorSystem();
        lifter = new Lifter();
        flyWheel = new FlyWheel();
        airTankRefreshWait = 0;
    }

    public void shoot() {
        if (flyWheel.getSpeed() <= 0) {
            SmartDashboard.putNumber("Failure to shoot!!! The motor is off", flyWheel.getSpeed());
        }
       lifter.raiseTheBall();
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
