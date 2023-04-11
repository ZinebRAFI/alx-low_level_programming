#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int z = 0, size = 0;
		char *a;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	/*+1 on the size puts the end of string character*/
	a = malloc(size * sizeof(*str) + 1);

	if (a == 0)
		return (NULL);

	for (z = 0; str[z]; z++)
		a[z] = str[z];

	return (a);
}
