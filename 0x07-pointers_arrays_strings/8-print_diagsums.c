#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a:Integer square matric
 * @size: The size of the matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int y = 0, max = size * size, sum1 = 0, asum2 = 0;

	for (; y < max; y += size + 1)
		sum1 += a[y];

	for (y = size - 1; y < max - 1; y += size - 1)
		sum2 += a[y];

	printf("%d, %d\n", sum1, sum2);
}
