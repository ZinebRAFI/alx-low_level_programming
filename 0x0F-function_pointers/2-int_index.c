#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: pointer to searching/comparing function that we need to execute
 * Return: index where integer's found, -1 if not found or array not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int z = 0;

	if (array && size && cmp)
		while (z < size)
		{
			if (cmp(array[z]))
				return (z);
			z++;
		}
	return (-1);
}
