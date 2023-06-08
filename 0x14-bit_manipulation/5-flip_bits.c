#include "main.h"

/**
 * flip_bits - Yields the number of segments you would
 * need to turn to get from one digit to another
 * @n: number one
 * @m: number two
 *
 * Return: Number of segments
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
