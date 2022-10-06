#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to be written to stdout
 * Return: On success 1
 * On error, -1
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
