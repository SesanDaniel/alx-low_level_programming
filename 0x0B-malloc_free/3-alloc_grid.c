#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width:the width of array
 * @height: the height of array
 * Return: Pointer of the 2D Array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **arry, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int**)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int*)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
