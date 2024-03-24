void updateServo(int state);
void Joystick_Button();
void MoveARD(int direct);
#include <Servo.h>
int xValue;
int xMapped;
int yValue;
int yMapped;
int dataPin = 13;
int inputPin = A2;
int clockPin = 9; 
int latchPin = 12; 
int pinchPin = 8;
int X_Pin = A0;
int Y_Pin = A1; 
int motorSpeed = 255; 
int avoidPin = 2; 
const int touchSensorPin = A3;




 

#define FLSPEEDPIN 11
#define FRSPEEDPIN 5
#define BRSPEEDPIN 6
#define BLSPEEDPIN 3
Servo myServo;

boolean buttonState = false;
boolean lastButtonState = false;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50; // Adjust as needed

void setup() {
  myServo.attach(8);
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(FLSPEEDPIN, OUTPUT);
  pinMode(FRSPEEDPIN, OUTPUT);
  pinMode(BRSPEEDPIN, OUTPUT);
  pinMode(BLSPEEDPIN, OUTPUT);
  pinMode(inputPin, INPUT_PULLUP);
  pinMode(pinchPin, OUTPUT); 
  pinMode(avoidPin, INPUT); 
  pinMode(touchSensorPin, INPUT);
}


void loop() {

  
  Joystick_Button();
  Joystick();
  
if(buttonState == 1)
{
  myServo.write(180);
}
else if(buttonState == 0)
{
  myServo.write(0);
}
}
