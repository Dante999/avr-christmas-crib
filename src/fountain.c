#include <avr/io.h>

#define DDR_FOUNTAIN DDRD
#define PORT_FOUNTAIN PORTD
#define PIN_FOUNTAIN PD5

/*******************************************************************************
 * initializes the I/Os
 *
 * @param   none
 *
 * @return  none
 *
 ******************************************************************************/
void fountain_init()
{
	DDR_FOUNTAIN |= (1 << PIN_FOUNTAIN);
	PORT_FOUNTAIN &= ~(1 << PIN_FOUNTAIN);
}

/*******************************************************************************
 * simulates the shining water of the fountain
 *
 * changes the brightness smoothly between 0 and 255
 *
 * @param   none
 *
 * @return  the power (brightness) of the shining water
 *
 ******************************************************************************/
uint8_t fountain_shine()
{
	static uint8_t dir   = 1;
	static uint8_t power = 0;

	if (dir == 1) {
		power += 2;

		if (power >= 220)
			dir = 0;
	}
	else {
		power -= 2;

		if (power <= 80)
			dir = 1;
	}

	return power;
}
