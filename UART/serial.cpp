const int led = 13; 
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600); 
  Serial.println("Nhap '1' de bat LED, '0' de tat LED.");
}
void loop() {
  if (Serial.available() > 0) {
    char incomingByte = Serial.read(); // Ð?c k? t? t? Serial
    if (incomingByte == '1') {
      digitalWrite(led, HIGH); 
      Serial.println("LED da bat.");
    } else if (incomingByte == '0') {
      digitalWrite(led, LOW);
      Serial.println("LED da tat.");
    } else {
      Serial.println("Ky tu khong hop le. Vui long nhap '1' hoac '0'.");
    }
  }
}
