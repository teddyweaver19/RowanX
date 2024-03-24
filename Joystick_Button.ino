void Joystick_Button()
{

  unsigned long currentTime = millis();

if ((currentTime - lastDebounceTime) > debounceDelay) {
lastDebounceTime = millis();
  

boolean newState = digitalRead(inputPin);

  if (newState != lastButtonState && newState == LOW) {

    buttonState = !buttonState;

    Serial.print("Button state changed to: ");
    Serial.println(buttonState ? "true" : "false");
  } 
  
  lastButtonState = newState;
   
}
 
}
    
  
    
  
  
