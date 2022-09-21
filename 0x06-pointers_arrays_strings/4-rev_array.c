#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: An input integer
 * @n: An input integer
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int sup;

	while (i < n--)
	{
		sup = a[i];
		a[i++] = a[n];
		a[n] = sup;
	}
}
