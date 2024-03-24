void updateServo(int state) {

int avoidState = digitalRead(avoidPin);


switch (state) 
{
case 1:

if (avoidState == LOW)
{
    Serial.println("The obstacle is present");
    myServo.write(90);
}
else
{
    Serial.println("The obstacle is NOT present");
    myServo.write(0);
}
    


break;

case 2:

int touchValue = digitalRead(touchSensorPin);


if (touchValue == HIGH) {
    Serial.println(" touch detected!"); // Display a message when touch is detected
    
    myServo.write(90);
    
    
  } else {
    Serial.println(" No Touch detected!");
    myServo.write(180);
    
  }

break;
}

}
