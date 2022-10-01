#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: A string input
 * Return: Nothing
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
