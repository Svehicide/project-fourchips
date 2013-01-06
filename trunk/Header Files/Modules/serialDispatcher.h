#ifndef __SERIALDISPATCHER_H
#define __SERIALDISPATCHER_H

/******************************************************************
**						  INCLUDES FILES						 **
******************************************************************/

#include "main.h"

/******************************************************************
** 				   ENUMERATIONS - DEFINITIONS					 **
******************************************************************/

/******************************************************************
** 	        		  FUNCTION PROTOTYPES	    	  			 **
******************************************************************/

/**
 * This function is recalled each 200ms and manage the frame sent
 * by the C# program and call or save as callback the appropriate function(s)
 */
void serialDispatcher (void);

#endif