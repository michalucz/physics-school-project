# Physics & Electronics Interactive Project

An interactive physics-electronics project created for the 80th anniversary of my high school. This project was designed, programmed, and built entirely by myself.

## Hardware & Construction
To ensure stability during the public demonstration, the circuit was permanently soldered on a **prototype board (perfboard)**. The custom soldered board connects directly to the Arduino Uno via jumper wires, keeping the microcontroller reusable while making the sensor and player connections robust.

## How It Works
The device functions as an interactive target utilizing lasers and light sensors:
* There are **three photoresistors** acting as targets.
* When a laser beam hits one of the photoresistors, the Arduino detects the change in light intensity.
* Depending on which sensor is lit, the **DFPlayer Mini** launches and plays a specific, pre-assigned sound.

I successfully demonstrated the working device and explained the underlying physics and electronics to guests during the school's 80th-anniversary celebration.

## Components Used
* Arduino Uno
* Prototype board (perfboard) – custom soldered circuit
* Jumper wires
* 3x Photoresistors (LDR)
* DFPlayer Mini MP3 Player
* Laser pointer
* Speaker
