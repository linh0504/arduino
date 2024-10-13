void setup() {
  for(int i = 0; i < 8;i++){
    pinMode(i, OUTPUT);
  }
}
int n = 0;
void bai2_sangduoi(){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      digitalWrite(j, HIGH); // b?t bóng th? j

      // b?t n bóng sau bóng j
      for(int k = j - n; k < j; k++){
        digitalWrite(k, HIGH);
      }
      delay(500);
      digitalWrite(j, LOW);// t?t bóng j 
      // t?t n bóng sau bóng j
      for(int k = j - n; k < j; k++){
        digitalWrite(k, LOW);
      }

    }
     n++; // m?i 1 v?ng s? b?ng theo sau tãng 1
     if(n == 8){
        n = 0; //khi t?t c? ðèn ð?u sáng th? l?p l?i t? ð?u
      }
  }
}
void bai2_sangduoibongdausang(){
  for(int i =0;i<8;i++){
    for(int j=0;j<8-i;j++){
      digitalWrite(j, HIGH);
      delay(50);
      digitalWrite(j, LOW);
      delay(50);
    }
    digitalWrite(8-i, HIGH);
  }
}
void loop() {
  bai2_sangduoibongdausang();
}
