# Servo Motor Control - Sweep Servo

## Description

The Servo Motor Control project manages a servo motor by sweeping it back and forth from 0 degrees to 180 degrees. The servo moves incrementally with a specified delay between movements, creating a sweeping effect.

## Components

- Arduino (e.g., Arduino Uno)
- Servo Motor
- Jumper Wires

## Pin Configuration

| Component   | Pin Number |
| ----------- | ---------- |
| Servo Motor | 9          |

## Code

```cpp
#include <Servo.h>

Servo myservo; // Create a servo object to control the servo
int pos = 0; // Variable to store the servo position/angle

void setup() {
  myservo.attach(9);  // Attach the servo object to pin 9
}

void loop() {
  for (pos = 0; pos < 180; pos += 1) { // Move from 0 degrees to 180 degrees in 1-degree steps
    myservo.write(pos); // Set the servo position according to 'pos' variable
    delay(15); // Wait 15ms for the servo to reach the position
  }

  for (pos = 180; pos >= 1; pos -= 1) { // Move from 180 degrees back to 0 degrees
    myservo.write(pos); // Set the servo position according to 'pos' variable
    delay(15); // Wait 15ms for the servo to reach the position
  }
}
```

## How It Works

1. Initialization:
   - The setup() function configures the pin connected to the servo motor and attaches the servo to pin 9.
2. Sweep Movement:
   - The loop() function commands the servo motor to move from 0 degrees to 180 degrees and then back to 0 degrees.
   - The movement is performed in 1-degree steps with a 15ms delay at each step, creating a smooth sweeping effect.

## Usage

1. Connect the servo motor to pin 9 on the Arduino using jumper wires.
2. Upload the code to the Arduino.
3. The servo motor will start moving from 0 degrees to 180 degrees and back in a continuous loop.

## Notes

- Ensure the servo motor is properly connected and not under excessive load.
- Adjust the delay or step size if needed to achieve the desired speed or movement.
