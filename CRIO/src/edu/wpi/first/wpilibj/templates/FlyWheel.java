package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.Talon;

/**
 *
 * @author Zephan
 */
public class FlyWheel {

    Talon flyWheel;

    private double speed;

    FlyWheel() {
        flyWheel = new Talon(Ports.flyWheelMotorChannel);
        speed = 0;
    }

    public void spinUp() {
        if (speed < 1 && speed > 0) {
            speed = speed + 0.1;
        } else {
            speed = 0;
        }
        flyWheel.set(speed);

    }

    public void spinDown() {
        if (speed < 1 && speed >= 0) {
            speed = speed - 0.1;
        } else {
            speed = 0;
        }
        flyWheel.set(speed);
    }

    public double getSpeed() {
        return speed;
    }
}
