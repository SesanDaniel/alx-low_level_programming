#include "main.h"

/**
 * _pow_recursion - Return the value of x raised to power of y
 * @x: the base
 * @y: the exponent
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y, -1));
}