const int trigPin = A0;
const int echoPin = A1;
const int LEDPin1 = 2;
const int LEDPin2 = 3;
const int LEDPin3 = 4;
const int LEDPin4 = 5;
const int LEDPin5 = 6;
const int LEDPin6 = 7;
const int LEDPin7 = 8;
const int LEDPin8 = 9;
const int LEDPin9 = 10;
const int LEDPin10 = 11;

long duration, distance; // Duration used to calculate distance


void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LEDPin1, OUTPUT);
  pinMode(LEDPin2, OUTPUT);
  pinMode(LEDPin3, OUTPUT);
  pinMode(LEDPin4, OUTPUT);
  pinMode(LEDPin5, OUTPUT);
  pinMode(LEDPin6, OUTPUT);
  pinMode(LEDPin7, OUTPUT);
  pinMode(LEDPin8, OUTPUT);
  pinMode(LEDPin9, OUTPUT);
  pinMode(LEDPin10, OUTPUT);
  digitalWrite(LEDPin1, LOW);
  digitalWrite(LEDPin2, LOW);
  digitalWrite(LEDPin3, LOW);
  digitalWrite(LEDPin4, LOW);
  digitalWrite(LEDPin5, LOW);
  digitalWrite(LEDPin6, LOW);
  digitalWrite(LEDPin7, LOW);
  digitalWrite(LEDPin8, LOW);
  digitalWrite(LEDPin9, LOW);
  digitalWrite(LEDPin10, LOW);


}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);

  //Calculate the distance (in cm) based on the speed of sound.
  distance = min(60, duration / 58.2);

  digitalWrite(LEDPin1, LOW);
  digitalWrite(LEDPin2, LOW);
  digitalWrite(LEDPin3, LOW);
  digitalWrite(LEDPin4, LOW);
  digitalWrite(LEDPin5, LOW);
  digitalWrite(LEDPin6, LOW);
  digitalWrite(LEDPin7, LOW);
  digitalWrite(LEDPin8, LOW);
  digitalWrite(LEDPin9, LOW);
  digitalWrite(LEDPin10, LOW);

  if (distance <= 50) {
    digitalWrite(LEDPin1, HIGH);
  }
  if (distance <= 45) {
    digitalWrite(LEDPin2, HIGH);
  }
  if (distance <= 40) {
    digitalWrite(LEDPin3, HIGH);
  }
  if (distance <= 35) {
    digitalWrite(LEDPin4, HIGH);
  }
  if (distance <= 30) {
    digitalWrite(LEDPin5, HIGH);
  }
  if (distance <= 25) {
    digitalWrite(LEDPin6, HIGH);
  }
  if (distance <= 20) {
    digitalWrite(LEDPin7, HIGH);
  }
  if (distance <= 15) {
    digitalWrite(LEDPin8, HIGH);
  }
  if (distance <= 10) {
    digitalWrite(LEDPin9, HIGH);
  }
  if (distance <= 5) {
    digitalWrite(LEDPin10, HIGH);
  }

  delay(100);

}



