#ifdef ENABLE_DEBUG
#define DEBUG_ESP_PORT Serial
#define NODEBUG_WEBSOCKETS
#define NDEBUG
#endif 

#include <Arduino.h>
#ifdef ESP8266 
#include <ESP8266WiFi.h>
#endif 
#ifdef ESP32   
#include <WiFi.h>
#endif

#include "SinricPro.h"
#include "SinricProSwitch.h"

#define WIFI_SSID         "wifissid"
#define WIFI_PASS         "wifipass"
#define APP_KEY           "Appkey"
#define APP_SECRET        "Appsecret"

#define SWITCH_ID_1       "Id of the relay"
#define RELAYPIN_1        5

#define BAUD_RATE         115200               

bool onPowerState1(const String &deviceId, bool &state) {
 Serial.printf("Device 1 turned %s", state?"on":"off");
 digitalWrite(RELAYPIN_1, state ? HIGH:LOW);
 return true; 
}

void setup() {
  Serial.begin(BAUD_RATE);
  Serial.printf("\r\n\r\n");
  
  setupWiFi();
  setupSinricPro();
  
  digitalWrite(RELAYPIN_1, HIGH); 
}


void setupWiFi() {
  Serial.printf("\r\n[Wifi]: Connecting");
  WiFi.begin(WIFI_SSID, WIFI_PASS);

  while (WiFi.status() != WL_CONNECTED) {
    Serial.printf(".");
    delay(250);
  }

  Serial.printf("connected!\r\n[WiFi]: IP-Address is %s\r\n", WiFi.localIP().toString().c_str());
}


void setupSinricPro() {
  
  pinMode(RELAYPIN_1, OUTPUT);
    
  SinricProSwitch& mySwitch1 = SinricPro[SWITCH_ID_1];
  mySwitch1.onPowerState(onPowerState1);
  
  
 
  SinricPro.onConnected([](){ Serial.printf("Connected to SinricPro\r\n"); }); 
  SinricPro.onDisconnected([](){ Serial.printf("Disconnected from SinricPro\r\n"); });
   
  SinricPro.begin(APP_KEY, APP_SECRET);
}


void setup() {
  Serial.begin(BAUD_RATE); Serial.printf("\r\n\r\n");
  setupWiFi();
  setupSinricPro();
}

void loop() {
  SinricPro.handle();
}
