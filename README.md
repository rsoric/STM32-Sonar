# STM32 Sonar
![STM32 Sonar](https://i.imgur.com/Tw5jVzE.png)

[Youtube](https://www.youtube.com/watch?v=_OT8yEqTaM0)

This is a Sonar based on the STM32 microcontroller. It uses the following parts:
* STM32F428I-DISC1 Devboard
* * Two hardware timers of the STM32 are implemented, one for measuring the ECHO of the ultrasonic sensor, one for generating the PWM to drive the servo
* * One GPIO pin is implemented to send the trigger signal to the ultrasonic sensor
* HC-SR04 ultrasonic sensor
* Generic mini-servo motor

In software, FreeRTOS is used for multi-threading.

## Source code

The following is a list which shows files that could be of interest to you if you are inspecting the source code. Most of the code in the repository is pre-generated by TouchGFX/STM32 software, so this is a quick glossary of the files where I've actually written code.
* core/src/main.c
* core/src/hcsr04.c (and the corresponding .h file)
* core/src/pwm.c (and the corresponding .h file)
* TouchGFX/gui/src/home_screen/homeView.cpp

## TODO

* More detailed code comments, explaining the workflow etc.
* Calculation of the coordinates for the shapes on the screen that make up the sensor readings can be done in a separate thread. 
* The calculated coordinates should really be saved in the 'zones' variable. Declaration of the array of TouchGFX shapes and their painters (PainterRGB565), required to update the screen, should also not be done in the screen refresh callback, but I've had trouble making it work that way.
