#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument counter
 * @argv: argument vector
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i, mul;

	for (i = 0; i < argc; i++)
	{
		if (argc > 3)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mul);
		}
		return (0);
	}
}
