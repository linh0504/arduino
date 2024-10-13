#define NTC A4 // cam bien nhiet do
#define LDR A5 //cam bien anh sang 
#define X A3  // hozs
#define Y A2  // ve
#define SEL_PIN  5
void setup() {
  Serial.begin(9600); // giao tiep UART voi mt
}

void loop() {
     int vert = analogRead( A2);
     int horz = analogRead( A3);
       Serial.print( " toado :");
       Serial.print( horz );
       Serial.print(" ; ");
       Serial.println( vert );
       delay ( 500 );
}
