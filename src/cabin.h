#ifndef CABIN_H_INCLUDED
#define CABIN_H_INCLUDED

#include <avr/io.h>

void cabin_init();
void cabin_light_front(uint8_t on);
void cabin_light_building(uint8_t on);

#endif // CABIN_H_INCLUDED
