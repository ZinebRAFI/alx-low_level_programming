#include "main.h"
#include <stdlib.h>

/**
 * *create_array - a function that create an array of chars
 * and initializes it with a specific char
 * @size: an input given by user (number of chars)
 * @c: a character
 *
 * Return: the array arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
