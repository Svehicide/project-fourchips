/*********************************************************************************************************
**							Electronic programming of microcontroller in C#								**
**		 ______   ______     __  __     ______     ______     __  __     __     ______   ______    		**
**		/\  ___\ /\  __ \   /\ \/\ \   /\  == \   /\  ___\   /\ \_\ \   /\ \   /\  == \ /\  ___\   		**
**		\ \  __\ \ \ \/\ \  \ \ \_\ \  \ \  __<   \ \ \____  \ \  __ \  \ \ \  \ \  _-/ \ \___  \  		**
**		 \ \_\    \ \_____\  \ \_____\  \ \_\ \_\  \ \_____\  \ \_\ \_\  \ \_\  \ \_\    \/\_____\ 		**
**		  \/_/     \/_____/   \/_____/   \/_/ /_/   \/_____/   \/_/\/_/   \/_/   \/_/     \/_____/ 		**
**																										**
**									Developed by 3TIA students :										**
**										- CALMANT Ludovic												**
**										- HELIN Arnaud													**
**										- KUMWIMBA Sarah												**
**										- MALHERBE Lionel												**
**																										**
*********************************************************************************************************/

/******************************************************************
**						  INCLUDES FILES						 **
******************************************************************/

#include "../Header Files/header.h"

/******************************************************************
** 					ENUMERATIONS - DEFINITIONS (inside the file) **
******************************************************************/

/******************************************************************
** 		      	   		GLOBAL VARIABLES (inside the file) 		 **
******************************************************************/

/******************************************************************
**              		  MAIN PROGRAM 				  			 **
******************************************************************/

void main (void) {
	/****					LOCAL VARIABLES					  ****/

	/****     		 INITIALIZATION OF PERIPHERALS         	  ****/

	// FOSC to 16MHz [p32]
	OSCCONbits.IRCF = 0b111;

	/****     		INITIALIZATION OF INTERRUPTIONS           ****/
		
	/****             		  MAIN LOOP                		  ****/
	
	while (1) {
		
	}
}