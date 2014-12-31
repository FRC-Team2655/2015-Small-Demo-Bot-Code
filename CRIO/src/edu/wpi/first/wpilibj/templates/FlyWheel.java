package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.Talon;

/**
 *
 * @author Zephan
 */
public class FlyWheel {

    Talon flyWheel;

    FlyWheel() {
        flyWheel = new Talon(Ports.flyWheelMotorChannel);
    }

    public void spinUp() {
    }

    public void spinDown() {
    }

    public void turnOff() {
    }
}
