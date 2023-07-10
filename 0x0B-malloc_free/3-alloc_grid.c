#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a nested loop
 * @width: width input
 * @height: height input
 * Return: pointer to 2th dim. array
 */

int **alloc_grid(int width, int height)
{
	int **y;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	y = malloc(sizeof(int *) * height);

	if (y == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		y[a] = malloc(sizeof(int) * width);

		if (y[a] == NULL)
		{
			for (; a >= 0; a--)
				free(y[a]);

			free(y);

			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			y[a][b] = 0;
	}

	return (y);
}
