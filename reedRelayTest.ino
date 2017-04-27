
//Test code for reed relay connected to pin 13.

void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT);
  digitalWrite(13, HIGH);
}

void loop() {
  Serial.println(digitalRead(13));
  delay(1000);
}
