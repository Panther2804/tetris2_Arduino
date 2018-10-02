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
    char a = 'a';
    switch(a) {
        case 'w': return 1;
        case 's': return 2;
        case 'a': return 3;
        case 'd': return 4;
        case ' ': return 0;
        default: return 0;

    }
}

 
