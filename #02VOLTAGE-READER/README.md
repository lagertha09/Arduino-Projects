# Potentiometer Voltage Reader

A simple Arduino project that reads voltage from a potentiometer and displays the value through the Serial Monitor.

## Components
- Arduino Uno
- Potentiometer
- Breadboard
- Jumper wires

## Concepts Learned
- Analog input
- `analogRead()`
- ADC values (0-1023)
- Converting ADC values to voltage
- Serial communication

## How it works
The potentiometer creates a variable voltage between 0V and 5V. Arduino reads this voltage through an analog pin and converts it into a digital value.
