/*****************************************************************************
 * HelloWorldOfADSP21489.cpp
 *****************************************************************************/

#include <sys/platform.h>
#include "adi_initialize.h"
#include "HelloWorldOfADSP21489.h"
#include <iostream>

/** 
 * If you want to use command program arguments, then place them in the following string. 
 */
char __argv_string[] = "";

int main(int argc, char *argv[])
{
	/**
	 * Initialize managed drivers and/or services that have been added to 
	 * the project.
	 * @return zero on success 
	 */
	adi_initComponents();
	
	std::cout << "Hello, World!" << std::endl;

	/* Begin adding your custom code here */

	return 0;
}

