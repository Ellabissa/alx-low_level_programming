#include "main.h"

/**
 * set_bit - sets the worth of a segment to 1
 * at a specified index
 * @n: Indicator of an unsigned long int
 * @index: Indicator of segment
 *
 * Return: 1 if it worked, -1 if it didn't
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
