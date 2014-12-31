package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.Talon;

/**
 *
 * @author Zephan
 */
public class FlyWheel {

    Talon flyWheel;

    int speed;

    FlyWheel() {
        flyWheel = new Talon(Ports.flyWheelMotorChannel);
        speed = 0;
    }

    public void spinUp() {
        if (speed < 1 && speed > 0) {
            speed++;
        } else {
            speed = 0;
        }
        flyWheel.set(speed);

    }

    public void spinDown() {
        if (speed < 1 && speed > 0) {
            speed--;
        } else {
            speed = 0;
        }
        flyWheel.set(speed);
    }

    public void turnOff() {
        speed = 0;
        flyWheel.set(speed);
    }
}
