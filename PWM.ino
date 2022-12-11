int redPin=9;
int bright=127; // 0 ~ 255 is 0V - 5V
void setup(){
  pinMode(redpin, OUTPUT);
}

void loop(){
  analogWrite(redPin,bright);
}
