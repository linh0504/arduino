void setup() {
  for(int i = 0; i < 8;i++){
    pinMode(i, OUTPUT);
  }
}
int n = 0;
void bai2_sangduoi(){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      digitalWrite(j, HIGH); // b?t b�ng th? j

      // b?t n b�ng sau b�ng j
      for(int k = j - n; k < j; k++){
        digitalWrite(k, HIGH);
      }
      delay(500);
      digitalWrite(j, LOW);// t?t b�ng j 
      // t?t n b�ng sau b�ng j
      for(int k = j - n; k < j; k++){
        digitalWrite(k, LOW);
      }

    }
     n++; // m?i 1 v?ng s? b?ng theo sau t�ng 1
     if(n == 8){
        n = 0; //khi t?t c? ��n �?u s�ng th? l?p l?i t? �?u
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
