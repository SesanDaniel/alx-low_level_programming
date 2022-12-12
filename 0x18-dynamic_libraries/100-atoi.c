#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer.
 * @s: An input string
 * Return: Converted Integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int sum = 0;
	char zilch = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			zilch = 1;
			sum = sum * 10 + *s - '0';
		}
		else if (zilch)
			break;
		s++;
	}
	if (sign < 0)
		sum = (-sum);
	return (sum);
}
