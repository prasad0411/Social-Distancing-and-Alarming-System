# Social-Distancing-and-Alarming-System
This project is aimed at creating a distance monitoring system using Arduino. It incorporates an ultrasonic sensor to measure distances from objects in real time. It also utilizes temperature sensors to gather temperature data to detect social distancing breaches. The system uses NeoPixel LEDs to display different colors based on the measured distance, indicating proximity levels, and a buzzer for audible alerts.

Detailed breakdown of the code:

Library Inclusion:
The code includes the "Adafruit_NeoPixel.h" library, which provides functions for controlling NeoPixel LED strips.

Pin Assignments:
Several pins are assigned to different components:
ledPin: Pin connected to the NeoPixel LED strip.
ledNo: Number of LEDs in the strip.
buzzerPin: Pin connected to the buzzer.
echoPin: Pin connected to the echo pin of the ultrasonic sensor.
trigPin: Pin connected to the trigger pin of the ultrasonic sensor.
ledred, ledyellow, ledwhite: Pins connected to different colored LEDs.

Distance Thresholds:
Two variables, minDistance, and maxDistance, are defined to set the distance thresholds for triggering different actions based on the measured distance.

NeoPixel Strip Initialization:
An instance of the Adafruit_NeoPixel class named strip is created, specifying the number of LEDs, the LED pin, and the LED type.

Setup Function:
Pin modes are defined for the buzzer, trigger pin, echo pin, and different colored LEDs.
The NeoPixel strip is initialized and turned off.

Loop Function:
This function executes repeatedly in a continuous loop.

Distance Calculation:
The calcDistance function is called to calculate the distance using an ultrasonic sensor.
The distance value is stored in the distance variable.

Distance Comparison and Actions:
The measured distance is checked against the defined thresholds.
If the distance is less than or equal to minDistance, the buzzer is turned on, the red LED is turned on, and the NeoPixel strip is set to display a red color.
If the distance is less than or equal to maxDistance, the buzzer is turned off, the red and yellow LEDs are turned on, and the NeoPixel strip is set to display a yellow color.
If the distance exceeds maxDistance, the buzzer is turned off, and the red, yellow, and white LEDs are turned on. The NeoPixel strip is set to display a white color.

NeoPixel Strip Update:
The strip.show() function is called to update the NeoPixel strip with the new color settings.

Delay:
A delay of 50 milliseconds is added to introduce a short pause before the next iteration of the loop.
Distance Calculation Function:

The calcDistance function utilizes an ultrasonic sensor to measure the distance to an object.
It sends a short pulse to the trigger pin, receives the echo pulse, and calculates the distance based on the duration of the echo pulse.
The calculated distance is returned.
Overall, this code sets up a system that measures distance using an ultrasonic sensor and provides visual and auditory indications based on the measured distance using NeoPixel LEDs and a buzzer.
