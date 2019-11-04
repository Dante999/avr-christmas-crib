
#include <avr/io.h>

#define DDR_FIREPLACE DDRB
#define PORT_FIREPLACE PORTB
#define PIN_FIREPLACE PB2

/*******************************************************************************
 * initializes the I/Os
 *
 * @param   none
 *
 * @return  none
 *
 ******************************************************************************/
void fireplace_init()
{
	DDR_FIREPLACE |= (1 << PIN_FIREPLACE);
	PORT_FIREPLACE &= ~(1 << PIN_FIREPLACE);
}

/*******************************************************************************
 * simulates the burning fire and returns its current power
 *
 * the power of the fire will be jumping between 0 and 255 with every call of
 * this function. Through this, the brightness will create a flickering effect
 * which a real fire has.
 *
 * @param   none
 *
 * @return  the power of the fire between 0 (out) and 255 (brightest)
 *
 ******************************************************************************/
uint8_t fireplace_burn()
{
	static uint8_t power = 0;

	power += 90;

	return power;
}
