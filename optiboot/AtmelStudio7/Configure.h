/*
 * Configure.h
 *
 * Created: 17/07/2017 12:25:00 PM
 *  Author: joelm_w3vs8p0
 */ 


#ifndef CONFIGURE_H_
#define CONFIGURE_H_
#ifdef AS7_BASED_BUILD				

//Note: 57600 baud does not generate well with 16Mhz clock
#define BAUD					38400
#define BAUD_RATE				BAUD
#define BAUD_TOL				1

#define LED_START_FLASHES		3

//#define VIRTUAL_BOOT_PARTITION	1

#if defined(__AVR_ATmega328P__)
	#define F_CPU											16000000L				//CPU clock speed, used for timer and UART calculations
	#define LED B5
#endif //defined(__AVR_ATmega328P__)

#if defined(__AVR_ATmega64A__)
	#define DISABLE_OPTIBOOT_BOOTPAGE_OVERRIDES				1
	#define F_CPU											8000000L	
	#define LED E6			
	//#define LED_DATA_FLASH									1
	#define SP_INITS_AS_0									1		//Must manually init SP as RAMEND
	#define PIN_WRITE_NOT_TOGGLE							1		//Writing to PIN output does not trigger toggle, so xor must be used instead
#endif //defined(__AVR_ATmega64A__)

#endif //AS7_BASED_BUILD
#endif /* CONFIGURE_H_ */