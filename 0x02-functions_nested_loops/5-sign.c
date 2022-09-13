#include "main.h"

/**
 * print_sign - check description
 * @n: an input number
 * Description: a function that prints the sign of a number
 * Return: Nothing
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
