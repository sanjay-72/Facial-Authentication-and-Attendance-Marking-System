#include<Servo.h>
Servo mainGate;
//R = ready
//N = Unauthorised/face not detected
//G = GreenSignal/Gate open
const int redLed = 5,greenLed = 6,yellowLed = 7;
int myInput;
bool allready = false;
void setup() {
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,LOW);
  digitalWrite(yellowLed,LOW);
  Serial.begin(9600);
  mainGate.attach(9);
  mainGate.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    if(allready)
    digitalWrite(yellowLed,HIGH);
    myInput = Serial.read();
    if(myInput == 'R')
      allready = true;
    else if(myInput == 'N')
    {
      digitalWrite(redLed,HIGH);
      delay(2000);
      digitalWrite(redLed,LOW);
    }
    else if(myInput == 'G')
    {
      digitalWrite(greenLed,HIGH);
      mainGate.write(110);
      delay(2000);
      mainGate.write(0);
      delay(1000);
      digitalWrite(greenLed,LOW);
    }
  }
  else
  mainGate.write(0);
  

}
