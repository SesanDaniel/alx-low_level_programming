#include <unistd.h>

/**
 * _putchar - a function that writes character c to stdout
 * @c: Character to be pushed
 * Return: 1 on success and -1 if error occurs
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
