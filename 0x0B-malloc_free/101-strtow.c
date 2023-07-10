#include "main.h"
#include <stdlib.h>

/**
 * counting_words - a function that help to count the
 * number of words in a string
 * @stri: the string that will be evaluated
 *
 * Return: number of words
 */

int counting_words(char *stri)
{
	int f, d, x;

	f = 0;
	x = 0;

	for (d = 0; stri[d] != '\0'; d++)
	{
		if (stri[d] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			x++;
		}
	}

	return (x);
}

/**
 * **strtow - a function that split a string into words
 * @str: the string that will be splitted
 *
 * Return: Success will occur if: a pointer to an array of strings
 * Error will occurs if it is NULL
 */

char **strtow(char *str)
{
	char **m, *t;
	int h, g = 0, length = 0, words, b = 0, start, end;

	while (*(str + length))
		length++;
	words = counting_words(str);
	if (words == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);

	for (h = 0; h <= length; h++)
	{
		if (str[h] == ' ' || str[h] == '\0')
		{
			if (b)
			{
				end = h;
				t = (char *) malloc(sizeof(char) * (b + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				m[g] = t - b;
				g++;
				b = 0;
			}
		}
		else if (b++ == 0)
			start = h;
	}

	m[g] = NULL;

	return (m);
}
