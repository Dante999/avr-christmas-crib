#include "timer0.h"

/*******************************************************************************
 * initializes the timer 0
 *
 * @param   none
 *
 * @return  none
 *
 ******************************************************************************/
void timer0_init()
{
	TCCR0A |= (1 << WGM02) | (1 << WGM00); // 8bit PWM Phase correct

	TCCR0A |= (1 << COM0A1); // Clear OC0A on compare
	TCCR0A |= (1 << COM0B1); // Clear OB0B on compare

	TCCR0B |= (1 << CS01); // prescaler 8

	OCR0A = 0;
	OCR0B = 0;
}

/*******************************************************************************
 * sets the pwm output level
 *
 * @param   pwm     the power of the pwm [0=off|255=max]
 *
 * @return  none
 *
 ******************************************************************************/
void timer0_setA(uint8_t pwm) { OCR0A = pwm; }

/*******************************************************************************
 * sets the pwm output level
 *
 * @param   pwm     the power of the pwm [0=off|255=max]
 *
 * @return  none
 *
 ******************************************************************************/
void timer0_setB(uint8_t pwm) { OCR0B = pwm; }
