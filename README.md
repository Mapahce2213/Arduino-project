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
long a; //

#define KP_ROWS 4
#define KP_COLS 4

byte colPins[KP_COLS] = {33, 35, 37, 39};
byte rowPins[KP_ROWS] = {25, 27, 29, 31};

int lampara = 4;
int signala = 52;

boolean sonarius = false;

char keys[KP_ROWS][KP_COLS] = {
  {'1', '2', '3', '+'},
  {'4', '5', '6', '-'},
  {'7', '8', '9', '*'},
  {'*', '0', '#', '/'}
};

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
pinMode(signala, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
  
starter();

}




void loop() {

  remote();

if(getus) {
     passa(); 
}

if(sonarius) {
   sonar();
}
   
}
```
