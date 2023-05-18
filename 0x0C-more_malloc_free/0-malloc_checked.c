#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - This function assigns memory using malloc
 * @b: The number of bytes to apportion
 *
 * Return: a pointer to the assigned memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
