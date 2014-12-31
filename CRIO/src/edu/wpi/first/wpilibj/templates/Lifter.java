package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.DoubleSolenoid;

/**
 *
 * @author Zephan
 */
public class Lifter {

    TeamDoubleSolenoid lifter;
    TeamTimer timer;

    Lifter() {
        lifter = new TeamDoubleSolenoid(Ports.lifterUpChannel, Ports.lifterDownChannel);
        lifter.set(DoubleSolenoid.Value.kOff);
        timer = new TeamTimer();
    }

    public void raiseTheBall() {
        lifter.set(DoubleSolenoid.Value.kForward);
        TeamTimer.delay(100);
        lifter.set(DoubleSolenoid.Value.kOff);
        TeamTimer.delay(100);
        lifter.set(DoubleSolenoid.Value.kReverse);
        TeamTimer.delay(100);
        lifter.set(DoubleSolenoid.Value.kOff);
    }
}
