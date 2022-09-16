#include "main.h"

/**
 * print_line - check description
 * Description: a function that draws a straight line in the terminal.
 * @n: integer of numbers
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
