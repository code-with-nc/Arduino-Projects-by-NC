int ldr = A0;

void setup() {
  pinMode(9, OUTPUT);   // Red
  pinMode(10, OUTPUT);  // Green
  pinMode(11, OUTPUT);  // Blue
}

void loop() {

  int light = analogRead(ldr);

  if (light < 300) {
    // Dark → Blue
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
  }

  else if (light < 600) {
    // Medium light → Green
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }

  else if (light < 800) {
    // Bright → Yellow
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }

  else {
    // Very bright → Red
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }

  delay(200);
}