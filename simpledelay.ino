// Define constants
// SSR connected to pin 5
#define SSR 5
// Pushbutton connected to pin 6 (active low)
#define PUSHBUTTON 6
// Delay in seconds
#define SECONDS_DELAY 20



void setup() {
  // Configure output
  pinMode(SSR, OUTPUT);
  // Configure input with pullup resistor
  pinMode(PUSHBUTTON, INPUT_PULLUP);
  // Initialize to low state
  digitalWrite(SSR, LOW);
}



void loop() {
  if(!digitalRead(PUSHBUTTON)) {
    // Turn on SSR
    digitalWrite(SSR, HIGH);
    // Wait
    delay(SECONDS_DELAY*1000);
    // Turn off SSR
    digitalWrite(SSR, LOW);
  }
  // Slow down
  delay(100);
}
