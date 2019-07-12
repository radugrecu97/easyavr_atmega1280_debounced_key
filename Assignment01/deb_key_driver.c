/*
 * deb_key_driver.c
 *
 * Created: 17-May-19 14:59:44
 *  Author: radug
 */ 

#include <avr/io.h>

void init_keys()
{
	//configure port E as Sink
	DDRE = 0x00011000;
}

// key_no [1..2], return true if key pressed
uint8_t get_key(uint8_t key_no)
{
	int8_t bit;
	if (key_no == 1)
		bit = 4;
	else if (key_no == 2)
		bit = 5;
	
	//check if the output's bit is set for the desired key
	if (PINE & (1<<bit))
		return 1;
	else
		return 0;
}
