void MoveARD(int direct)
{ 
  switch(direct)
  {
    case 1: //Forward Full Speed
    //motorSpeed = 255; 
    analogWrite(FLSPEEDPIN, motorSpeed); 
    analogWrite(FRSPEEDPIN, motorSpeed); 
    analogWrite(BLSPEEDPIN, motorSpeed); 
    analogWrite(BRSPEEDPIN, motorSpeed); 
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,0b01100110);
    digitalWrite(latchPin, HIGH);
    break;

    case 2: //Reverse Full Speed
    motorSpeed = 255; 
   
    analogWrite(FLSPEEDPIN, motorSpeed); 
    analogWrite(FRSPEEDPIN, motorSpeed); 
    analogWrite(BLSPEEDPIN, motorSpeed); 
    analogWrite(BRSPEEDPIN, motorSpeed); 
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,0b10011001);
    digitalWrite(latchPin, HIGH);
    break; 

    case 3: //Stop
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,0b00000000);
    digitalWrite(latchPin, HIGH);

    break;

    case 4: //Left
    analogWrite(FLSPEEDPIN, (motorSpeed-126)); 
    analogWrite(FRSPEEDPIN, motorSpeed); 
    analogWrite(BLSPEEDPIN, 0); 
    analogWrite(BRSPEEDPIN, (motorSpeed-63)); 
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,0b01010010);
    digitalWrite(latchPin, HIGH);
    
    
    break; 

    case 5: //Right
    analogWrite(FLSPEEDPIN, (motorSpeed - 126)); 
    analogWrite(FRSPEEDPIN, motorSpeed ); 
    analogWrite(BLSPEEDPIN, (motorSpeed-63)); 
    analogWrite(BRSPEEDPIN, 0); 
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,0b10100100);
    digitalWrite(latchPin, HIGH);
    break; 
    
    case 6: //Slight Left Forward
    analogWrite(FLSPEEDPIN, (motorSpeed - 160)); 
    analogWrite(FRSPEEDPIN,motorSpeed); 
    analogWrite(BLSPEEDPIN, (motorSpeed - 160)); 
    analogWrite(BRSPEEDPIN, motorSpeed); 
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,0b01100110);
    digitalWrite(latchPin, HIGH);

    break;
    case 7: //Slight Right Forward
    analogWrite(FLSPEEDPIN, motorSpeed); 
    analogWrite(FRSPEEDPIN, motorSpeed - 160); 
    analogWrite(BLSPEEDPIN, motorSpeed); 
    analogWrite(BRSPEEDPIN, motorSpeed - 160); 
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,0b01100110);
    digitalWrite(latchPin, HIGH);
    break;
    case 8: //Slight Left Backwards
    analogWrite(FLSPEEDPIN, motorSpeed - 160); 
    analogWrite(FRSPEEDPIN, motorSpeed ); 
    analogWrite(BLSPEEDPIN, motorSpeed - 160); 
    analogWrite(BRSPEEDPIN, motorSpeed ); 
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,0b10011001);
    digitalWrite(latchPin, HIGH);
    break;
    case 9: //Slight Right Backwards 
    analogWrite(FLSPEEDPIN, motorSpeed); 
    analogWrite(FRSPEEDPIN, motorSpeed - 160); 
    analogWrite(BLSPEEDPIN, motorSpeed); 
    analogWrite(BRSPEEDPIN, motorSpeed - 160); 
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,0b10011001);
    digitalWrite(latchPin, HIGH);
    break;
    
  }
}
