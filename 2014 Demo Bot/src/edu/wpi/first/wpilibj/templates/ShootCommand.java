package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.*;

public class ShootCommand implements Runnable {

    private final Shooter m_shooter;

    private Timer timer;

    ShootCommand(Shooter shooter) {
        m_shooter = shooter;
        
        timer = new Timer();
        timer.reset();
    }

    public void run() {
        
        double waitForSpinUp = Global.shooterSpinUpTime;
        
        timer.start();
        m_shooter.launcherOn();
        TeamTimer.delay(milliseconds);
    }
}
