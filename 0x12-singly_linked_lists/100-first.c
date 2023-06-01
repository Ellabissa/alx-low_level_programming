#include <stdio.h>

/**
 * first - Task perform before main
 * Return: No yield .
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
