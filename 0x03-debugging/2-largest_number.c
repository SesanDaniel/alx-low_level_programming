#include "main.h"

/**
 * largest_number - returnsthe largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int larget;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
