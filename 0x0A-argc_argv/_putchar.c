#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: theb character to print
 * Return: nothing
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
