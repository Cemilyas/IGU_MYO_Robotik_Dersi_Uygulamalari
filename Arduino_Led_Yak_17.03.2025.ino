/*

İGÜ MYO ROBOTİK 1. Led Yak ve Söndür Uygulaması

Ekip ismi;
Aslı TÜRK
Barış KÖSE
Cemil İLYAS



*/

// the setup function runs once when you press reset or power the board

int led_pin = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led_pin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(200);                      // wait for a second
  digitalWrite(led_pin, LOW);   // turn the LED off by making the voltage LOW
  delay(200);                      // wait for a second
}
