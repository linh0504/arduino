int hienthi[8] = {0,1,2,3,4,5,6,7}; 
int so[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
void setup() {
}
void led71(){
  for (int i =0; i <7; i++) {
    pinMode(hienthi[i], OUTPUT); 
  }
  for (int j = 0; j < 10; j++) {
    // V?ng l?p ð? ð?c t?ng bit trong giá tr? s?
    for (int i = 0; i < 8; i++) {
      // Ð?c bit th? i trong s? j
      bool A = bitRead(so[j], i); 
      // B?t ho?c t?t chân týõng ?ng theo giá tr? c?a A
      digitalWrite(hienthi[i], A); 
    }
    delay(500); 
  }
}

void loop() {
 led71();
}

