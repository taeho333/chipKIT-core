/* Arduino SdFat Library
 * Copyright (C) 2010 by William Greiman
 * Revision Date: 08/18/2011 (Olver Jones)
 *
 * This file is part of the Arduino SdFat Library
 *
 * This Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with the Arduino SdFat Library.  If not, see
 * <http://www.gnu.org/licenses/>.
 */
// Warning this file was generated by a program.
#ifndef Sd2PinMap_h
#define Sd2PinMap_h

#define BIT_0       0x0001
#define BIT_1       0x0002
#define BIT_2       0x0004
#define BIT_3       0x0008
#define BIT_4       0x0010
#define BIT_5       0x0020
#define BIT_6       0x0040
#define BIT_7       0x0080
#define BIT_8       0x0100
#define BIT_9       0x0200
#define BIT_10      0x0400
#define BIT_11      0x0800
#define BIT_12      0x1000
#define BIT_13      0x2000
#define BIT_14      0x4000
#define BIT_15      0x8000

#define IOPORT_A    A
#define IOPORT_B    B
#define IOPORT_C    C
#define IOPORT_D    D
#define IOPORT_E    E
#define IOPORT_F    F
#define IOPORT_G    G
#define IOPORT_H    H
#define IOPORT_J    J
#define IOPORT_K    K

#define PORTSetBitsX(PORTx, BITS) LAT##PORTx##SET = BITS
#define PORTSetBits(PORTx, BITS) PORTSetBitsX(PORTx, BITS)

#define PORTClearBitsX(PORTx, BITS) LAT##PORTx##CLR = BITS
#define PORTClearBits(PORTx, BITS) PORTClearBitsX(PORTx, BITS)

#define PORTReadBitsX(PORTx, BITS) (PORT##PORTx & BITS)
#define PORTReadBits(PORTx, BITS) PORTReadBitsX(PORTx, BITS)

#define PORTSetPinsDigitalOutX(PORTx, BITS) TRIS##PORTx##CLR = BITS
#define PORTSetPinsDigitalOut(PORTx, BITS) PORTSetPinsDigitalOutX(PORTx, BITS)

#define PORTSetPinsDigitalInX(PORTx, BITS) TRIS##PORTx##SET = BITS
#define PORTSetPinsDigitalIn(PORTx, BITS) PORTSetPinsDigitalInX(PORTx, BITS)

#if defined(__PIC32_PPS__)
    #define PORTSetAsDigitalPinX(PORTx, BITS) ANSEL##PORTx##CLR = BITS
    #define PORTSetAsDigitalPin(PORTx, BITS) PORTSetAsDigitalPinX(PORTx, BITS)
#endif

#if defined(_uSD_SPI_CONFIG_)

    // specify nothing as this comes from Board_Defs.h

#elif defined(_BOARD_PONTECH_QUICK240_USB_)

    //uc Pin 72
    #define prtSDO				IOPORT_D
    #define	bnSDO				BIT_0

    //uc Pin 9
    #define prtSDI				IOPORT_C
    #define bnSDI				BIT_4

    //uc Pin 70
    #define prtSCK				IOPORT_D
    #define bnSCK				BIT_10

#elif defined(_BOARD_FUBARINO_SD_)

	#define prtSDO				IOPORT_G
	#define	bnSDO				BIT_8

	#define prtSDI				IOPORT_G
	#define bnSDI				BIT_7

	#define prtSCK				IOPORT_G
	#define bnSCK				BIT_6

#elif defined(_BOARD_FUBARINO_MINI_)

    // Digital pin 29
	#define prtSDO				IOPORT_C
	#define	bnSDO				BIT_8
	#define SD_SDO_PPS()        RPC8R   = 0b0000    // Bit Banging SPI, set as GPIO

    // Digital pin 27
	#define prtSDI				IOPORT_C
	#define bnSDI				BIT_6
	#define SD_SDI_PPS()                            // Bit Banging SPI, leave as nothing

    // Digital pin 4
	#define prtSCK				IOPORT_B
	#define bnSCK				BIT_15
	#define SD_SCK_PPS()        RPB15R  = 0b0000    // Bit Banging SPI, set as GPIO
	
#elif defined(_BOARD_CHIPKIT_PI_)

	// Digital pin 11
	#define prtSDO				IOPORT_A
	#define	bnSDO				BIT_1
	#define SD_SDO_PPS()        RPA1R   = 0b0000    // Bit Banging SPI, set as GPIO

	// Digital pin 12
	#define prtSDI				IOPORT_B
	#define bnSDI				BIT_8
	#define SD_SDI_PPS()                            // Bit Banging SPI, leave as nothing

	// Digital pin 13
	#define prtSCK				IOPORT_B
	#define bnSCK				BIT_14
	#define SD_SCK_PPS()        RPB14R  = 0b0000    // Bit Banging SPI, set as GPIO
	
#elif defined(_BOARD_FUBARINO_SDZ_)

	// Digital pin 25
	#define prtSDO				IOPORT_G
	#define	bnSDO				BIT_8
	#define SD_SDO_PPS()        RPG8R   = 0b0000    // Bit Banging SPI, set as GPIO

	// Digital pin 35
	#define prtSDI				IOPORT_G
	#define bnSDI				BIT_7
	#define SD_SDI_PPS()                            // Bit Banging SPI, leave as nothing

	// Digital pin 16
	#define prtSCK				IOPORT_G
	#define bnSCK				BIT_6
	#define SD_SCK_PPS()        RPG6R  = 0b0000    // Bit Banging SPI, set as GPIO

#elif defined(__PIC32_PPS__)
    #error Boards with PPS must be specifically defined

#else
//*	Dec 14, 2011	<MLS>	Issue #160 this is the same, but we have to have a default, this still needs work

	#define prtSDO				IOPORT_G
	#define	bnSDO				BIT_8

	#define prtSDI				IOPORT_G
	#define bnSDI				BIT_7

	#define prtSCK				IOPORT_G
	#define bnSCK				BIT_6

#endif

#endif
