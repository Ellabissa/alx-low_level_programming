#include "main.h"

/**
 * clear_bit - Sets the worth of segment to 0
 * at specified indicator
 * @n:Indicator of an unsigned long int
 * @index: Index of segment
 *
 * Return: 1 if it worked, -1 if it didnt
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
