#include "main.h"

/**
 * factorial - This function restores the factorial of a number
 * @n:The number use to restore the factorial from
 *
 * Return: This is the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

