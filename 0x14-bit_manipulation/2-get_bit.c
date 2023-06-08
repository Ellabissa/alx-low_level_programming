#include "main.h"

/**
 * get_bit - Yields the worth of a segment at a given
 * indicator
 * @n: unsigned long int insert
 * @index: indicator of the segment
 *
 * Return: Worth of the segment
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}
	return (-1);
}
