#include "function_pointers.h"
#include "stdlib.h"

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: Array element
 * @size: number of elements to be printed
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
