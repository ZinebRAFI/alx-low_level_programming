#include "main.h"
/**
 * *_strpbrk - Ebtry point
 * @s: input
 * @accept: input
 * Return: Always 0 5Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{

		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			return (s);
		}
		s++;
	}
	return ('\0');
}
