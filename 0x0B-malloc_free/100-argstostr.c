#include "main.h"
#include <stdlib.h>

/**
 * argstostr - my main entry function
 * @ac: an integer input
 * @av: a double pointer array
 *
 * Return: 0 (Success)
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}

	d += ac;

	arr = malloc(sizeof(char) * d + 1);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		arr[c] = av[a][b];
		c++;
	}

	if (arr[c] == '\0')
	{
		arr[c++] = '\n';
	}
	}

	return (arr);
}
