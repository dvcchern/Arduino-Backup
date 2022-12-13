int myPin=A2;
int readVal;
float V2;
int dt=250;
int redPin=9;
void setup() {
  Serial.begin(115200);
  pinMode(myPin, INPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  readVal=analogRead(myPin);
  V2=(5./1023.)*readVal;
  Serial.print("Potentiomter Voltage is ");
  Serial.println(V2);
  if(2.<V2 && V2<4.){digitalWrite(redPin,HIGH);};
  if(V2<2.|| 4.<V2){digitalWrite(redPin,LOW);};
  delay(dt);
}
