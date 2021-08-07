
int EL = 5;             // EL - To start or stop the motor
int Speedometer = 3;        // Signal - Hall sensor
int ZF = 4;           // ZF - To control direction
int VR = 2;   // VR - To control Speed

int speed1 = 0;

void setup() {
    Serial.begin(9600);
    pinMode(EL, OUTPUT);
    pinMode(Speedometer, OUTPUT);
    pinMode(ZF, OUTPUT);
    pinMode(VR, OUTPUT);
    digitalWrite(Speedometer, HIGH); // We will control full range speed using VR 
}


void loop() {

      speed1 = 70;
      digitalWrite(EL, LOW);

      // Move Forward
      analogWrite(VR, speed1); //Speed
      digitalWrite(ZF, HIGH); //Forward direction
      delay(1000);
      digitalWrite(EL, HIGH);
      delay(1000);

      //Stop
      digitalWrite(EL, LOW);

      // Move Backward
      analogWrite(VR, speed1);     // Speed
      digitalWrite(ZF, LOW);      // Bckward direction
      delay(1000);
      digitalWrite(EL, HIGH);
      delay(1000);

       //Stop
      digitalWrite(EL, LOW);       
      }
