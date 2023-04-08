#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - test if it's positive number.
 *
 * @argvv: a argv
 * Return: true only if entire string is a number, false is not
 */

bool is_num(char *argvv)
{
	int z = 0;

	for (z = 0; argvv[z]; z++)
	{
		if (!(argvv[z] >= '0' && argvv[z] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - program that adds positive numbers.
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on Success, 1 if an argument wassn't a number
 */

int main(int argc, char *argv[])
{
	int i = 1;
		int sum = 0;

		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}

		/* check all arguuments to add numbers */
		while (i < argc)
		{
			if (is_num(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);

		return (0);
}
