#include "cabin.h"

#define DDR_LED_FRONT DDRB
#define PORT_LED_FRONT PORTB
#define BIT_LED_FRONT PB3

#define DDR_LED_BUILDING DDRB
#define PORT_LED_BUILDING PORTB
#define BIT_LED_BUILDING PB4

/*******************************************************************************
 * initializes the I/Os
 *
 * @param   none
 *
 * @return  none
 *
 ******************************************************************************/
void cabin_init()
{
	DDR_LED_FRONT |= (1 << BIT_LED_FRONT);
	PORT_LED_FRONT |= (1 << BIT_LED_FRONT);

	DDR_LED_BUILDING |= (1 << BIT_LED_BUILDING);
	PORT_LED_BUILDING |= (1 << BIT_LED_BUILDING);
}

/*******************************************************************************
 * turns the led in the front on/off
 *
 * @param   on      1   turn the led on
 *                  0   turn the led off
 *
 * @return  none
 *
 ******************************************************************************/
void cabin_light_front(uint8_t on)
{
	if (on)
		PORT_LED_FRONT |= (1 << BIT_LED_FRONT);
	else
		PORT_LED_FRONT &= ~(1 << BIT_LED_FRONT);
}

/*******************************************************************************
 * turns the led in the building on/off
 *
 * @param   on      1   turn the led on
 *                  0   turn the led off
 *
 * @return  none
 *
 ******************************************************************************/
void cabin_light_building(uint8_t on)
{
	if (on)
		PORT_LED_BUILDING |= (1 << BIT_LED_BUILDING);
	else
		PORT_LED_BUILDING &= ~(1 << BIT_LED_BUILDING);
}
