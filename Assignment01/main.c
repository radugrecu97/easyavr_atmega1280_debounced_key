/*
* Assignment01.c
*
* Created: 3/6/2019 3:32:21 PM
* Author : radug
*/

#include "util/delay.h"
#include "deb_key_driver.h"
#include "led_driver.h"

int main(void)
{

	init_leds();
	init_keys();
	
	while (1)
	{
		//AND
		set_led(1, get_key(1) && get_key(2));
		
		//OR
		set_led(2, get_key(1) || get_key(2));
		
		//XOR
		set_led(3, !get_key(1) ^ !get_key(2));
		
		//NAND
		set_led(4, !(get_key(1) && get_key(2)));
		
		//NOR
		set_led(5, !(get_key(1) || get_key(2)));
		
		//XNOR
		set_led(6,  !(!get_key(1) ^ !get_key(2)));

		
		_delay_ms(10);
	}
}