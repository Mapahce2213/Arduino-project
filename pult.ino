void remote() {
    if (irrecv.decode()) {
          long val = irrecv.decodedIRData.command;
          Serial.println(val, DEC);


     if(val == 69) {
        if(doble) {
digitalWrite(power, HIGH);
starter(); 
doble = false;   
login = false;
      sonarius = false;
delay(500);           
           } else {
            lcd.clear();
digitalWrite(power, LOW); 
doble = true;
getus = false;
delay(500);
            }
            
          }

     if(val == 12) {
      if(!login) return;
      digitalWrite(lampara, HIGH);
      mod1();
      sonarius = false;
     } else {
      digitalWrite(lampara, LOW);
     }

     if(val == 24) {
       if(!login) return;
       mod2();
     }


     irrecv.resume();
    }
}
