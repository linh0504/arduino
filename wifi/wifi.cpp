#include <WiFi.h>
#include <HTTPClient.h>
const char* ssid = "Nguyen Son"; 
const char* password = "choxinn2chuc"; 
const String apiKey = "880703797d0f9fd7b913bf732a17992b"; // OpenWeather
const String city = "Hanoi"; 
void setup() {
  Serial.begin(115200); 
  delay(1000); 
  WiFi.begin(ssid, password);
  Serial.print("ket noi wifi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500); 
    Serial.print("."); 
  }
  Serial.println("ket noi thanh cong"); 
  if (WiFi.status() == WL_CONNECTED) { 
    HTTPClient http; 
    String url = "http://api.openweathermap.org/data/2.5/weather?q=" + city + "&appid=" + apiKey + "&units=metric"; // T?o URL
    http.begin(url); 
    int httpCode = http.GET(); 
    if (httpCode > 0) {
      String payload = http.getString(); 
      Serial.println("Response: " + payload); 
      int tempIndex = payload.indexOf("\"temp\":") + 7; 
      String temperature = payload.substring(tempIndex, payload.indexOf(",", tempIndex)); // L?y giá tr? nhi?t ð?
      Serial.print("Current Temperature: "); 
      Serial.println(temperature + " °C"); 
    } else {
      Serial.println("Error on HTTP request"); 
    }
    http.end(); 
  }
}

void loop() {
}
