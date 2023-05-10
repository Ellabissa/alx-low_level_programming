#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - This function recoils the natural square root of a number
 * @n: This number is use to calculate the square root of
 *
 * Return: This is the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - This function repeats to find the natural
 * square root of a number
 * @n: The number use to calculate the sqaure root of
 * @i: The iterator
 *
 * Return: This is the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

