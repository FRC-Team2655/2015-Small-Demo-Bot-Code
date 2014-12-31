package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.DigitalInput;
import edu.wpi.first.wpilibj.Relay;

/**
 *
 * @author Zephan
 */
public class Turret {

    private DigitalInput backLeftLimitSwitch;
    private DigitalInput backRightLimitSwitch;
    private FlyWheel flywheel;
    private Relay spike;

    public Turret() {
        spike = new Relay(Ports.turretRotationMotorChannel);
        
        backLeftLimitSwitch = new DigitalInput(Ports.backLeftTurretLimitSwitchChannel);
        backRightLimitSwitch = new DigitalInput(Ports.backLeftTurretLimitSwitchChannel);
        
        flywheel = new FlyWheel();
    }

    void turnLeft(boolean direction) {
        if (!backLeftLimitSwitch.get()) {
            spike.set(Relay.Value.kOn);
            spike.set(Relay.Value.kReverse);
        }

    }

    void turnRight() {
        if (!backRightLimitSwitch.get()) {
            spike.set(Relay.Value.kOn);
            spike.set(Relay.Value.kForward);
        }
    }

    void turnOff() {
        spike.set(Relay.Value.kOff);
    }
    
    void spinUp(){
        flywheel.spinUp();
    }
    
    void spinDown(){
        flywheel.spinDown();
    }
    
}
