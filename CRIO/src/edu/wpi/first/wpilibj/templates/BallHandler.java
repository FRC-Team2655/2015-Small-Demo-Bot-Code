package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.smartdashboard.SmartDashboard;

public class BallHandler {
    
    CompressorSystem ballHandlerCompressor;
    private int airTankRefreshWait;

    BallHandler() {
        ballHandlerCompressor = new CompressorSystem();
        airTankRefreshWait = 0;

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
