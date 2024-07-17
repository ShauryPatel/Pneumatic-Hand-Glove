const int pumpIn1 = 9;
const int pumpIn2 = 10;
const int valveIn1 = 11;
const int valveIn2 = 12;
const int pumpIn3 = 3;
const int pumpIn4 = 4;
const int valveIn3 = 5;
const int valveIn4 = 6;
const int pumpIn5 = 28;
const int pumpIn6 = 30;
const int valveIn5 = 24;
const int valveIn6 = 26;
const int pumpIn7 = 40;
const int pumpIn8 = 42;
const int valveIn7 = 36;
const int valveIn8 = 38;
const int pumpEnable1 = 8;
const int pumpEnable2 = 2;
const int pumpEnable3 = 32;
const int pumpEnable4 = 44;
const int valveEnable1 = 13;
const int valveEnable2 = 7;
const int valveEnable3 = 22;
const int valveEnable4 = 34;

void setup() {
  // Set motor driver pins as outputs
  pinMode(pumpIn1, OUTPUT);
  pinMode(pumpIn2, OUTPUT);
  pinMode(valveIn1, OUTPUT);
  pinMode(valveIn2, OUTPUT);
  pinMode(pumpIn3, OUTPUT);
  pinMode(pumpIn4, OUTPUT);
  pinMode(valveIn3, OUTPUT);
  pinMode(valveIn4, OUTPUT);
  pinMode(pumpIn5, OUTPUT);
  pinMode(pumpIn6, OUTPUT);
  pinMode(valveIn5, OUTPUT);
  pinMode(valveIn6, OUTPUT);
  pinMode(pumpIn7, OUTPUT);
  pinMode(pumpIn8, OUTPUT);
  pinMode(valveIn7, OUTPUT);
  pinMode(valveIn8, OUTPUT);
  pinMode(pumpEnable1, OUTPUT);
  pinMode(valveEnable1, OUTPUT);
  pinMode(pumpEnable2, OUTPUT);
  pinMode(valveEnable2, OUTPUT);
  pinMode(pumpEnable3, OUTPUT);
  pinMode(valveEnable3, OUTPUT);
  pinMode(pumpEnable4, OUTPUT);
  pinMode(valveEnable4, OUTPUT);

  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Turn on all pumps
  digitalWrite(pumpEnable1, HIGH);
  digitalWrite(pumpEnable2, HIGH);
  digitalWrite(pumpEnable3, HIGH);
  digitalWrite(pumpEnable4, HIGH);
  
  // Turn on all valves
  digitalWrite(valveEnable1, LOW);
  digitalWrite(valveEnable2, LOW);
  digitalWrite(valveEnable3, LOW);
  digitalWrite(valveEnable4, LOW);

  // Control the direction of the pumps and valves as needed
  digitalWrite(pumpIn1, HIGH);
  digitalWrite(pumpIn2, LOW);
  digitalWrite(valveIn1, HIGH);
  digitalWrite(valveIn2, LOW);

  digitalWrite(pumpIn3, HIGH);
  digitalWrite(pumpIn4, LOW);
  digitalWrite(valveIn3, HIGH);
  digitalWrite(valveIn4, LOW);

  digitalWrite(pumpIn5, HIGH);
  digitalWrite(pumpIn6, LOW);
  digitalWrite(valveIn5, HIGH);
  digitalWrite(valveIn6, LOW);

  digitalWrite(pumpIn7, HIGH);
  digitalWrite(pumpIn8, LOW);
  digitalWrite(valveIn7, HIGH);
  digitalWrite(valveIn8, LOW);

  // Add a delay for testing purposes
  delay(4000);

  // Turn off all pumps and valves
  digitalWrite(pumpEnable1, LOW);
  digitalWrite(pumpEnable2, LOW);
  digitalWrite(pumpEnable3, LOW);
  digitalWrite(pumpEnable4, LOW);
  
  digitalWrite(valveEnable1, HIGH);
  digitalWrite(valveEnable2, HIGH);
  digitalWrite(valveEnable3, HIGH);
  digitalWrite(valveEnable4, HIGH);

  // Add a delay for testing purposes
  delay(4000);
}
