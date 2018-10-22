#include "tetris2.h"
#include "treiber.h"
#include "Arduino.h"

int randomn(int min, int max) {
    random(min,max);
}


void sprint(char a) {
	Serial.print(a);
}

void sprintln(char a) {
    Serial.println(a);
}


void sbegin(int a) {
  Serial.begin(a);
}

int pinread() {
    if(digitalRead(5)) return 1;
    if(digitalRead(5)) return 2;
    if(digitalRead(4)) return 3;
    if(digitalRead(5)) return 4;
    return 0;

}
void stripeinit() {}
void stripeshow() {}
void pindef() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);

  pinMode(4, INPUT);
  pinMode(5, INPUT);
  
  }
 
