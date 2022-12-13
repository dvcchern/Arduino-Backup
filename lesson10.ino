int myVoltPin=A2;
int readVal;
int delayTime = 250
float V2;

void setup() {
  Serial.begin(115200);
}

void loop() {
  readVal = analogRead(myVoltPin);
  V2=(5./1023.)*readVal;
  Serial.println(V2);
  delay(delayTime);
}
