#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 *  followed by a new line.
 *  @s: An input string
 *  Return: Always 0
 */

void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i__)
		_putchar(s[i]);
	_putchar('\n');
}
