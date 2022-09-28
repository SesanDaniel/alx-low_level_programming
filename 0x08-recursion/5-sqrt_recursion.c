#include "main.h"
int _sqrt(int bfr, int root)

/**
 * _sqrt_recursion - a function that returns the natural square root of a numbe
 * @n: The integer to be checked
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - used to search the squareroot
 * @bfr: previous value
 * @root: value of squareroot
 * Return: the square root
 */

int _sqrt(int bfr, int root)
{
	if (bfr > root)
		return (-1);
	else if (bfr * bfr == root)
		return (bfr);
	return (_sqrt(bfr + 1, root));
}
