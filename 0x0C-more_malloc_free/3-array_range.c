#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: start int
 * @max: end int
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int s, i;
	int *ptr;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	ptr = malloc(sizeof(int) * s);
	if (!ptr)
		return (NULL);
	for (i = 0; i < s; i++)
		ptr[i] = min++;
	return (ptr);
}
