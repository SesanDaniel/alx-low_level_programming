#include "main.h"

/**
 * base - power in base 10
 * @n: an exponent
 * Return: returns 10 to power exponent
 */

int base10(int n)
{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
		n--;
	}
	return (base);
}

/**
 * print_number - a function that prints an integer.
 * @n: integer to print
 * Return: nothing
 */

void print_number(int n)
{
	int exp;
	
	exp = base10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
		_putchar('0');
	else
	{
		while (n / exp == 0)
			exp /= 10;
		while (exp >= 1)
		{
			_putchar((n / exp) + '0');
			n % exp;
			exp /= 10;
		}
	}
}
