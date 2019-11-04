/*
 */

#include "cabin.h"
#include "fireplace.h"
#include "fountain.h"
#include "timer0.h"
#include <avr/io.h>
#include <util/delay.h>

/*
 * Hardware Schematic
 *  LED Fireplace           PB2 (OC0A)
 *  LED Fountain            PD5 (OC0B)
 *  LED Cabin Front         PB3 (OC1A)
 *  LED Cabin Building      PB4 (OC1B)
 */

/*******************************************************************************
 * initializes all modules
 *
 * @param   none
 *
 * @return  none
 *
 ******************************************************************************/
void init()
{
	timer0_init();
	fireplace_init();
	fountain_init();
	cabin_init();
}

/*******************************************************************************
 * the main function
 *
 * @param   none
 *
 * @return  none
 *
 ******************************************************************************/
int main(void)
{
	init();

	cabin_light_building(1);
	cabin_light_front(1);

	while (1) {
		timer0_setA(fireplace_burn());
		timer0_setB(fountain_shine());
		_delay_ms(10);
	}

	return 0;
}
