int ledPin = 13;                 // LED connected to digital pin 13
int inPin = 10;
int beepPin = 7;
int i = 0;  
unsigned long duration = 0;
boolean ready = true;
void setup()
{
  pinMode(inPin, INPUT);
  pinMode(ledPin, OUTPUT);      // sets the digital pin as output
  pinMode(beepPin, OUTPUT);      // sets the digital pin as output
}

void loop()
{
  if (digitalRead(inPin) == HIGH && ready) {
        for (int i = 0; i < 8; i++ ) {
        digitalWrite(ledPin, HIGH);
        delay(50);
        digitalWrite(ledPin, LOW);
        delay(50);
        }
        ready = false; 
  }
  if (!ready) {
    delay(3000);
    ready = true;
  }  
  }
  /*
  if (digitalRead(inPin) == HIGH) {
      digitalWrite(ledPin, HIGH);    // sets the LED to the button's value  
      for (int i = 0; i < 8; i++) {
        if (i == 1 || i == 5) {
        for (int j = 0; j < 10; j++) {
            digitalWrite(beepPin, HIGH);
            delay(15);
            digitalWrite(beepPin, LOW);
            delay(15);
        }        
        delay(100);
        digitalWrite(ledPin, LOW);
        delay(100);
      }
      }
  }  
  
  
  */
  
//}
