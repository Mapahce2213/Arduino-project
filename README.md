# Arduino project
What is it? It's my idea to make multitasking in code. I maked Iremote control and connected LED display.

## Code
The main code is in **myproject.ino** the other files are responsible for maintaining some tasks in a large system. 

Main code is:

```c++
#include <LiquidCrystal.h> // libraries
// other libraries...




// SONAR
#include "SR04.h"
#define TRIG_PIN 42 // connect pins
#define ECHO_PIN 40
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a; // the variable

// here registring my keyboard

int lampara = 4;
int signala = 52;

boolean sonarius = false;

char keys[KP_ROWS][KP_COLS] = {
  {'1', '2', '3', '+'},
  {'4', '5', '6', '-'},
  {'7', '8', '9', '*'},
  {'*', '0', '#', '/'}
}; // keys

boolean getus = false;

boolean login = false;

String pass;

String expa;

Keypad pad((char*)keys, rowPins, colPins, KP_ROWS, KP_COLS);

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

int irPin = 3;
int power = 5;
int doble = false;

IRrecv irrecv(irPin);

void setup() {
  
pinMode(power, OUTPUT);
pinMode(lampara, OUTPUT);
pinMode(signala, OUTPUT); // registring outputs
  Serial.begin(9600); // register port
  irrecv.enableIRIn(); // registring Iremote control
  
starter(); // the start function run

}
void loop() {
  remote(); // function for accept signals from remote control
if(getus) {
     passa(); // the other module
}

if(sonarius) {
   sonar(); // second function of my big code
}

}
```

I'm very new to this, and this is my first code that works well!

## The construction

I put it all together using some of the parts
![https://i.imgur.com/vKcq9Tl.jpeg](constructor)
