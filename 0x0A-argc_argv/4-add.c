#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: Argument counter
 * @argv: Argument Vector
 * Return: Always (0) success
 */

int main(int argc, char **argv)
{
	int n, add = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		add += n;
	}
	printf("%d\n", add);
	return (0);
}
