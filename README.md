# N-35 

An experimental, code-driven aircraft inspired by the **Lockheed Martin F-35**. This project integrates advanced propulsion intake geometry and vortex-reduction wing design into a minimalist, recycled-material airframe to explore high-precision kinematics.

##  Aerodynamics & Design

### Advanced DSI & S-Duct Intake
The N-35 features dual **Diverterless Supersonic Inlets (DSI)** located on the front-bottom section of the fuselage, directly inspired by the F-35. 
* **S-Duct Architecture:** Air is channeled through twin S-shaped ducts that converge into a single plenum.
* **Propulsion Logic:** The converged airflow which flows into the high-RPM motor, hits a turbine positioned centimeters back to maximize compression before exiting through a fixed, small-diameter nozzle optimized for high-velocity thrust.

### Wingtip Vortex Mitigation
Each wing, features a **45-degree bend** at the tip. These function as high-efficiency winglets, reducing "Wingtip Vortices" by preventing high-pressure air from the bottom of the wing from bleeding over to the low-pressure top. This minimizes induced drag and preserves momentum for the climb.

### Dual-Servo Elevon System
Control is managed by two independent servo motors. These surfaces function as **elevons**, managing pitch and roll authority.
* **Active Rotation:**At the 5583ms (5.58s) mark, the servos transition to a reflexed position to initiate rotation
### Physics & Kinematics Summary

Flight Mission Profile
To ensure recovery within the operational radius, the flight is divided into a Power Phase and a Descent Phase:

- Ground Roll Distance: 56.1 m (Time to rotation: 5.58s)

- Power Climb Distance: 28.9 m (Transition to peak height)

- Total Flight Footprint: ~115 m (Safely within the 170m boundary)

## Core Specifications
- Fuselage Mass (m): 0.609 kg

- Lift Velocity ($V_{lift}$
​
 ): 20.1 m/s

- Peak Velocity ($V_{max}$ 
​
 ): 24.7 m/s (Capped for 85m Power Phase)

- Net Acceleration (a): 3.6 m/s²

- Required Total Thrust (T): 2.3714 N

- Climb Angle (θ): 8° Optimized shallow climb

## Operational Environment & Safety
- Peak Altitude: ~15.83 meters.

- Obstacle Clearance: The N-35 is calculated to clear obstacles up to 15m (e.g., mature coconut trees) at the end of the Power Phase.

- Recovery Zone: A minimum of 60m of clear "overrun" space is maintained within the 170m limit to allow for a glide descent after motor-cut.

*Developed by serial-commit-dev*
