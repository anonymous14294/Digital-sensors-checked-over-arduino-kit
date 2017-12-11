int reedpin= 2;
int powerpin= 3;
int presencepin= 4;

boolean reedstatus;

boolean powerstatus;

boolean presencestatus;

void setup() {
  Serial.begin(9600);

  pinMode(reedpin, INPUT);

  pinMode(powerpin, INPUT);

  pinMode(presencepin, INPUT);
  
  Serial.println("Digital sensors Results");

}

void loop() {
 reedstatus = getreedstatus();
 powerstatus = getpowerstatus();
 presencestatus=getpresencestatus();

 Serial.println(" ");
 Serial.println("*****************");

 Serial.println("Gate Status");
 if(reedstatus== true)
  Serial.println("OPEN");
 else
 Serial.println("CLOSE");

 Serial.println("Power Status");
 if(powerstatus== true)
 Serial.println("ON");
 else
 Serial.println("OFF");

 Serial.println("Presence Status");
 if(presencestatus==true)
 Serial.println("Someone Came");
 else
 Serial.println("Noone Came");

 Serial.println("******************");
 Serial.println(" ");

 delay(1000);

}

boolean getreedstatus()
{    
        return (boolean)digitalRead(reedpin);        
}

boolean getpowerstatus()
{    
        return (boolean)digitalRead(powerpin);
}

boolean getpresencestatus()
{    
        return (boolean)digitalRead(presencepin);      
}

