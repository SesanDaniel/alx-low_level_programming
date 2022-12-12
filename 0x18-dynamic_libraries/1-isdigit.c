#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: An input integer
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	char digit;
	int isdigit = 0;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
