#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character c to be printed
 * Return: nothing
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}