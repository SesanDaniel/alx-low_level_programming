#include "main.h"a
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int y;

	for (y = 1; y < 100; y++)
	{
		if (y % 3 == 0 && y % 5 == 0)
			printf("FizzBuzz ");
		else if (y % 3 == 0)
			printf("Fizz ");
		else if (y % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", y);
	}
	printf("Buzz\n");

	return (0);
}
