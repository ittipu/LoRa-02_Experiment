<h3>Basic Interfacing with LoRa-02 (SX1278) between Arduino Uno and Raspberry Pi 4 </h3>

Here we using LoRa library for 
<h4>Raspberrypi 4 Interfacing</h4> 
<p>link:
https://github.com/rpsreal/pySX127x</p>


<h4>LoRa library for Arduino Uno Interfacing</h4>
<p>Link: 
https://github.com/sandeepmistry/arduino-LoRa</p>

<h4>Pin Configuration for LoRa-02 and RPI4</h4>

| Raspberry Pi   | LoRa-02(SX1278)     |
| ----- | ------ |
| 3.3V          | 3.3V                |
|  GND           |GND |
| GPIO 10 |  MOSI |
| GPIO 9  |  MISO |
| GPIO 11 |  SCK  |
| GPIO 8  | CS/Nss/Enable |
| GPIO 4  | DIO 0 |
| GPIO 17 | DIO 1 |
| GPIO 18 | DIO 2 |
| GPIO 27 | DIO 3 |
| GPIO 22 | RST |

Connect a led with GPIO 23

<h4> Pin Configuration for LoRa-02 and Arduino Uno </h4>

| Arduino   | LoRa-02(SX1278)     |
| ----- | ------ |
| 3.3V          | 3.3V                |
| GND | GND |
| 13 | SCK |
| 12 | MISO |
| 11 | MOSI |
| 10 | NSS/CS |
| 9 | RST |
| 2 | DIO 0|

Connect a led with digital pin 7
