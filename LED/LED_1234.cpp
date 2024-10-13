int LED5=4;
void setup() {
  for(int i=1;i<6;i++){
    pinMode(i, OUTPUT);
  }
}
void bai2_sole(){
  digitalWrite(0 , HIGH);
  digitalWrite(1 , LOW);
  digitalWrite(2 , HIGH);
  digitalWrite(3 , LOW);
  digitalWrite(4 , HIGH);
  delay(500);
  digitalWrite(0 , LOW);
  digitalWrite(1 , HIGH);
  digitalWrite(2 , LOW);
  digitalWrite(3 , HIGH);
  digitalWrite(4 , LOW);
  delay(500);
}
void tungledsangtat(){
  for(int i=0;i<5;i++){
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    delay(500);
  }
}
void haibonglanluot(){
  for(int j=0; j<4;j++){
    digitalWrite(j, HIGH);
    digitalWrite(j+1, HIGH);
    delay(500);
    digitalWrite(j, LOW);
    digitalWrite(j+1, LOW);
    delay(500);
  }
}
void sangtat(){
  for(int z=0;z<5;z++){
    digitalWrite(z, HIGH);
    delay(500);
  }
  for(int z=5;z>=0;z--){
     digitalWrite(z, LOW);
     delay(500);
  }
}
void loop() {
   sangtat();
}

