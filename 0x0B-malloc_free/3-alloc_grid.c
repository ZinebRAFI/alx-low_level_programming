#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **zee;
	int a, z;

	if (height <= 0 || width <= 0)
		return (NULL);

	zee = (int **) malloc(sizeof(int *) * height);

	if (zee == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		zee[a] = (int *) malloc(sizeof(int) * width);
		if (zee[a] == NULL)
		{
			free(zee);
			for (z = 0; z <= a; z++)
				free(zee[z]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (z = 0; z < width; z++)
		{
			zee[a][z] = 0;
		}
	}
	return (zee);
}
