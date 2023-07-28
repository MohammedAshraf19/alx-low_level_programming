#include <stdio.h>

/**
* premain - exexute before main.
* Return: void.
*/

void __attribute__ ((constructor)) premain()
{
		printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
