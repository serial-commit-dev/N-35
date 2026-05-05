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
* **Active Rotation:** At the 9.7s mark, the servos transition to a 1.5cm reflexed position to initiate rotation.

## Physics & Kinematics Summary

* **Fuselage Mass (m):** 0.609 kg
* **Target Rotation Velocity (v):** 35 m/s
* **Ground Roll Distance (s):** 170 m
* **Net Acceleration (a):** 3.6 m/s²
* **Calculated Burn Time (t):** 9.7 seconds
* **Required Total Thrust (T):** 2.3714 N

---
*Developed by serial-commit-dev*
