# Brushless DC Motor Driver


In this project, I am using QS-909 brushless DC motor driver with Arduino Uno.


# Wiring

<p align="center">
<img src="https://user-images.githubusercontent.com/85786699/128597942-5051f35a-e6a9-408f-a15a-a44f62ed08c6.PNG">
<br> 
Figure 1: Wiring</p>


# Arduino Code


First, we define pins:
<br>
```C++

int EL = 5;             // EL - To start or stop the motor
int Speedometer = 3;        // Signal - Hall sensor
int ZF = 4;           // ZF - To control direction
int VR = 2;   // VR - To control Speed
```
<br>
Then, in setup function we set the speedometer to high because we want to take full range of speed and control the speed from VR, and because in this application we do not need Hall sensor readings.

<br>

```C++
void setup() {
    Serial.begin(9600);
    pinMode(EL, OUTPUT);
    pinMode(Speedometer, OUTPUT);
    pinMode(ZF, OUTPUT);
    pinMode(VR, OUTPUT);
    digitalWrite(Speedometer, HIGH); // We will control full range speed using VR 
}
```
<br>

To make the motor move forward we set ZF to high, and to reverse direction we set it to low.
<br>

```C++
      digitalWrite(ZF, HIGH); //Forward direction
      digitalWrite(ZF, LOW); //Backward direction

```
<br>

**Full code is uploaded in the repository, I hope you like it!**
