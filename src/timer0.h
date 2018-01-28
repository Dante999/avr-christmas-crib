#ifndef TIMER0_H_INCLUDED
#define TIMER0_H_INCLUDED

#include <avr/io.h>

void timer0_init();
void timer0_setA(uint8_t pwm);
void timer0_setB(uint8_t pwm);

#endif // TIMER0_H_INCLUDED
