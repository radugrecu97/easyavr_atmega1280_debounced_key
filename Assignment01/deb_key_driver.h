/*
 * deb_key_driver.h
 *
 * Created: 17-May-19 14:59:37
 *  Author: radug
 */ 


#ifndef DEB_KEY_DRIVER_H_
#define DEB_KEY_DRIVER_H_

void init_keys();

// key_no [1..2], return true if key pressed

uint8_t get_key(uint8_t key_no);


#endif /* DEB_KEY_DRIVER_H_ */