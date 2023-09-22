# Social-Distancing-and-Alarming-SystemThe 
This project uses Arduino to create a real-time distance monitoring system. It employs an ultrasonic sensor to measure object distances and temperature sensors to detect social distancing breaches. NeoPixel LEDs display proximity levels, and a buzzer provides audible alerts.

Key elements include:

Library Inclusion: The code integrates the "Adafruit_NeoPixel.h" library to control NeoPixel LEDs.

Pin Assignments: Pins are assigned for the NeoPixel LED strip, buzzer, ultrasonic sensor, and LEDs of different colors.

Distance Thresholds: Thresholds for distance actions are defined using "minDistance" and "maxDistance" variables.

NeoPixel Strip Initialization: An instance of the Adafruit_NeoPixel class initializes the LED strip.

Setup Function: Pin modes are set, and the NeoPixel strip is initialized.

Loop Function: The core function repeatedly calculates distances, triggers actions, and updates NeoPixel colors.

Distance Calculation: The "calcDistance" function calculates object distances using the ultrasonic sensor.

This system displays red for close proximity, yellow for a moderate distance, and white for a safe distance. Audible alerts are triggered when needed. Overall, it provides a visual and auditory means of enforcing social distancing guidelines.
