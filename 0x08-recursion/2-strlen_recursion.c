#include "main.h"
/**
 * _strlen_recursion - This function yields the length of a string.
 * @s: This is the string to be gauged.
 *
 * Return: This is the length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

