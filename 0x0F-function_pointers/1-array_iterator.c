#include "function_pointers.h"

/**
 * array_iterator - printing a values of array
 * @array: argument passed to another function by pointer.
 * @action: pointer to a function .
 * @size: defined size
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (action == NULL || array == NULL)
	{
		return;
	}
	while (n < size)
	{
		action(array[n]);
		n += 1;
	}
}
