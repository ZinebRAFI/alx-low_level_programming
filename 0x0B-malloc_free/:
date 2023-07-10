#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that get ends of the inputs
 * and then it add them together for size
 * @s1: #1 input to concatenate
 * @s2: #2 input to concatenate
 *
 * Return: concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int b, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	b = l = 0;

	while (s1[b] != '\0')
		b++;

	while (s2[l] != '\0')
		l++;

	con = malloc(sizeof(char) * (b + l + 1));

	if (con == NULL)
		return (NULL);

	b = l = 0;

	while (s1[b] != '\0')
	{
		con[b] = s1[b];
		b++;
	}

	while (s2[l] != '\0')
	{
		con[b] = s2[l];
		b++, l++;
	}
	con[b] = '\0';
	return (con);
}
