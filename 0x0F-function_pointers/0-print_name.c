#include "function_pointers.h"

/**
  * print_name -This produces a name
  * @name: The name to produce
  * @f: The pointer to function
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
