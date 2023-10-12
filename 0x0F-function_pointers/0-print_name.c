#include "function_pointers.h"

/**
 * print_name - a function recieve function pointer
 * @name: argument passed to another function by pointer.
 * @f: pointer to a function .
 */

void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL || name == NULL)
	{
		return (NULL);
	}
	f(name);
}
