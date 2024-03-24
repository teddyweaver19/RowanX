void Joystick()
{

  xValue = analogRead(X_Pin);
  xMapped = map(xValue, 0, 1023, 0, 255);

  yValue = analogRead(Y_Pin);
  yMapped = map(yValue, 0, 1023, 0, 255);

  Serial.print("X: ");
  Serial.print(xMapped);
  Serial.print("\tY: ");
  Serial.println(yMapped);

  delay(100);
  
  
 if (((yMapped < 150) && (yMapped > 114)) && ((xMapped < 150) && (xMapped > 114))) //If within this range stay still
  {
    MoveARD(3);
    Serial.println("stop");
  }
  else if (yMapped  < 114)  { //If joystick is press forward, move forwards
      if (xMapped > 150)
      {
        MoveARD(7);
        Serial.println("slight right forward");
      }
      else if  (xMapped < 114)
      {
        MoveARD(6);
        Serial.println("slight left forward");
      }
      else
      {
        MoveARD(1);
        Serial.println("Forwards");
      }
  }
    else if (yMapped > 150)
    {
      if (xMapped < 114)
      {
        MoveARD(8);
        Serial.println("Slight Back left");
        
      }
      else if (xMapped > 150)
      {
        MoveARD(9);
        Serial.println("slight back right"); 
      }
      else 
      {
        MoveARD(2);
        Serial.println("backwards");
      }
      }
     else if (yMapped < 150 && yMapped > 114)
     {
      if (xMapped < 114) 
      {
        MoveARD(4);
        Serial.println("left");
      }
      else if (xMapped > 150)
      {
        MoveARD(5);
        Serial.println("Right");
     }
    }
}
   
   
  
    
    
    
  
