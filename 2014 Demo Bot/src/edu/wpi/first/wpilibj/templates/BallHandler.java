package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.*;

public class BallHandler {

    private final Solenoid airShocks;
////////////////////////////////////////////////////////////////////////////////
    private final boolean EXTEND = true;
    private final boolean AIR_OFF = false;
    private final boolean RETRACT = true;


    public BallHandler() {
        airShocks = new Solenoid(Ports.airShocksChannel);
    }

}
