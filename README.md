# RedLightGreenLight
Red Light Green Light with a ESP32!

[See demo video on Macondo system!](https://youtube.com)

This was submitted to Hack Club's Macondo

## What you need!
- ESP32-WROVER x1
- GPIO Extension Board x1
- Breadboard x1
- LED x2 (Red & Green)
- Resistor 220Ω x2
- Jumper M/M x6
- Resistor 10kΩ x2
- Push button x1

- Computer with Python (3.12 or higher i think)
  
_you can prob do without all of this but this is just what I have!

## How to set up

_again, might not be the best way but it works for me_

I recomend using [this](https://docs.freenove.com/projects/fnk0061/en/latest/fnk0061/codes/C/2_Button_%26_LED.html#id1) guide by freenove as it helped a lot when learning.

You can also use the screenshots bellow to copy wirering. I'm a bit of a perfectionist so I have color coded each componets jumper cable.

I use Arduino IDE as it is the easiest. You will need to open up the code and add in WIFI details.
```
const char* ssid     = ""; #your networks SSID
const char* password = ""; # your networks password

const char* udpAddress = ""; # your computers IP
```
Flash the code to the ESP32 and you should be good!

### Python

This is the bit I know a lot about! :hehe:

Check python is installed!

Run `pip install playsound`

Make sure the `.mp3` files are in the same directory.

`python server.py` to run and boot up the ESP32, ya should be good!!!

## Screenshots

<img width="500" height="auto" alt="image" src="https://github.com/user-attachments/assets/062fec2c-ea75-4498-b3cc-be25a51705de" />

<img width="500" height="auto" alt="image" src="https://github.com/user-attachments/assets/8d1b087d-33a2-41ae-9523-c060516aa586" />
