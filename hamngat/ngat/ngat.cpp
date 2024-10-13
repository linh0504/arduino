void setup() {
 pinMode(3, OUTPUT);
 pinMode(4, INPUT_PULLUP);//5v-0v
 attachInterrupt(digitalPinToInterrupt(4),hamngat,FALLING);
}
bool status_led =true ; //trang thai led sang
void hamngat(){
  digitalWrite(3,status_led );
  status_led =! status_led;//doitrangthai
  delayMicroseconds(2000);
}
void loop() {
}
