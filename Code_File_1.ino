// These constants won't change:
const int RelayPulsePin = 12;      // pin used to bias the transistor for pulse waveform (built in LED on board shows when this is toggled)
const int buttonPin = 7;        // pin that the momentary switch is attached to

void setup() {
  // set up the LED pins, one is for power to system while the other is for the pulse:
  pinMode(RelayPulsePin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(RelayPulsePin, LOW);
}


 //  while button is pressed, write the HIGH signal to RelayPulsePin (pin #12 on Arduino), keep HIGH for 250 msec, then write LOW; wait for 1 second, and then go back


void loop() {

 
 //  Monitor pin #7, which is connected to the pushbutton switch
 

 if (digitalRead(buttonPin) == LOW) {
    digitalWrite(RelayPulsePin, HIGH);
    delay(250);                             // The 250 in this line is the pulse signal duration in ms
    digitalWrite(RelayPulsePin, LOW);
    delay(2000);
  }

}
