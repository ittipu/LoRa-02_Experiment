#include <SPI.h>
#include <LoRa.h>

int counter = 0;
int led = 7;
void setup() {
  Serial.begin(9600);
  while (!Serial);
  pinMode(led, OUTPUT);

  Serial.println("LoRa Sender");

  if (!LoRa.begin(433E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

void loop() {
  Serial.print("Sending packet to Raspberry Pi: ");
  Serial.println(counter);

  // send packet
  LoRa.beginPacket();
  LoRa.print("I am arduino ");
  LoRa.print(counter);
  LoRa.endPacket();
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led,LOW);

  counter++;

  delay(2000);
}
