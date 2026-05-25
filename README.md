# Register-Level GPIO Control 

## Objective
Implement a blinking LED on PORT A, Pin 0 without using any external libraries (like Arduino’s `digitalWrite`). The pin state is toggled as fast as the system execution allows using direct Data Direction Register (DDR) access.

## Tasks Completed
* **Task A: Register-Level GPIO Control:** Configured `DDRA` directly to set Pin 0 as an output and wrote an infinite loop to toggle `PORTA`.
* **Task B: Systems Integration & Control:** Simulated the code using Microchip Studio.

## Verification & Screenshots
The code was simulated in Microchip Studio to observe the internal I/O register values. The corresponding bit in the `PORTA` register was successfully verified to toggle between high (`1`) and low (`0`).

**Register Output Screenshots:**
*(Ensure your screenshots are in a folder named `screenshots`)*

![PORTA High State](screenshots/PORTA_High.png)
*Figure 1: I/O Register showing PORTA Pin 0 set High.*

![PORTA Low State](screenshots/PORTA_Low.png)
*Figure 2: I/O Register showing PORTA Pin 0 set Low.*

## Source Code
The bare-metal C code used for this implementation can be found in the `src/main.c` file.
