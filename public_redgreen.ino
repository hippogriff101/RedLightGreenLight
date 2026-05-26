#define PIN_LED_RED 5
#define PIN_LED_GREEN 4
#define PIN_BUTTON 13

#include <WiFi.h>
#include <WiFiUdp.h>

const char* ssid     = "";
const char* password = "";

const char* udpAddress = ""; 
const int udpPort = 5005;

WiFiUDP udp;

void setup() {
  Serial.begin(115200);
    
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) { delay(500); }

  pinMode(PIN_LED_RED, OUTPUT);
  pinMode(PIN_LED_GREEN, OUTPUT);
  pinMode(PIN_BUTTON, INPUT);
}

bool isRedMode = true; 

void loop() {
  if (digitalRead(PIN_BUTTON) == LOW) {
    delay(20);
    if (digitalRead(PIN_BUTTON) == LOW) {
      
      if (isRedMode) {
        digitalWrite(PIN_LED_RED, HIGH);
        digitalWrite(PIN_LED_GREEN, LOW);
        if (udp.beginPacket(udpAddress, udpPort)) { udp.print("RED"); udp.endPacket(); }
      } else {
        digitalWrite(PIN_LED_RED, LOW);
        digitalWrite(PIN_LED_GREEN, HIGH);
        if (udp.beginPacket(udpAddress, udpPort)) { udp.print("GREEN"); udp.endPacket(); }
      }
      
      isRedMode = !isRedMode; 
    }
    
    while (digitalRead(PIN_BUTTON) == LOW);
    delay(20);
  }
}