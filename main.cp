#include "mbed.h"

DigitalOut led1(p6);
DigitalOut led2(p7);
DigitalOut led3(p8);
DigitalIn PIR1(p10);
DigitalIn PIR2(p12); 
int main() {

  while (1) {
    if (PIR1 == 1) {
      led1 = 1;
      wait(.5);
      led2 = 1;
      wait(.5);
      led3 = 1;
    } 
    else if (PIR2 == 1) {
      led1 = 0;
      led2 = 0;
      led3 = 0;
     } 
  }
}