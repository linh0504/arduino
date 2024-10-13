#include <TimerOne.h>
 int hienthi[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66,0x6D,0x7D,0x07, 0x7F, 0x6F};
 int so = 0;
void setup() {
    for (int i = 0; i < 10; i++) {
        pinMode(i, OUTPUT);
    }
    Timer1.initialize(1000000); // timer de goi ham moi giay
    Timer1.attachInterrupt(laplai); // ham lap lai
}
void laplai() {
    if ( so >= 99) // �?m �?n 99 het 99 quay lai 0
        so = 0;
    else
        so++;
}
void led72() {
    int chuc = so / 10; //  chuc
    int donvi = so % 10; // dv

    // Hi?n th? h�ng ch?c (DIG1)
    for (int j = 0; j < 8; j++) {
        digitalWrite(j, bitRead(hienthi[chuc], j)); // �i?u khi?n LED 7 �o?n cho h�ng ch?c
    }
    digitalWrite(8, LOW); // B?t DIG1
    delay(5); // Th?i gian �? hi?n th?
    digitalWrite(8, HIGH); // T?t DIG1

    // Hi?n th? h�ng ��n v? (DIG2)
    for (int j = 0; j < 8; j++) {
        digitalWrite(j, bitRead(hienthi[donvi], j)); // �i?u khi?n LED 7 �o?n cho h�ng ��n v?
    }
    digitalWrite(9, LOW); // B?t DIG2
    delay(5); // Th?i gian �? hi?n th?
    digitalWrite(9, HIGH); // T?t DIG2
}
void loop() {
    led72(); // G?i h�m hi?n th?
}
