#include <string>
#include <iostream>
#include <thread_db.h>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"


using namespace std;


int fun() {
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void randomSeed(int i) {
  srand(i);
}

int millis() {
    return time(NULL);
}

int randomn(int min, int max) {
    return rand() % (max - min) + max;
}


void sprint(char a) {
    std::cout << a;
}

void sprintln(char a) {
    std::cout << a << std::endl;
}

void intprint(int score) {
    std::cout << to_string(score) << std::endl;
}

void sbegin(int a) {

}

int delay(int milisec)
{
    struct timespec req={0};
    time_t sec=(int)(milisec/1000);
    milisec=milisec-(sec*1000);
    req.tv_sec=sec;
    req.tv_nsec=milisec*1000000L;
    while(nanosleep(&req,&req)==-1)
        continue;
    return 1;
}

void memcpy(int a[9][14], int b[9][14], int c) {
        for(int i = 0; i < 9; i ++) {
            for (int o; o < 14; o++) {
                a[i][o] = b[i][o];
            }
        }
   //     mprint();
    //    sprintln('c');
}

int pinread() {
    char a;
    cin >> a;
    switch(a) {
        case 'w': return 1;
        case 's': return 2;
        case 'a': return 3;
        case 'd': return 4;
        case ' ': return 0;
        default: return 0;

    }
}

 
