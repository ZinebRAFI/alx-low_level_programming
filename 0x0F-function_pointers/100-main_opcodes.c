#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
        char *p = (char *)main;
        int j;

        if (argc != 2)
                printf("Error\n"), exit(1);
        j = atoi(argv[1]);
        if (j < 0)
                printf("Error\n"), exit(2);

        while (j--)
                printf("%02hhx%s", *p++, j ? " " : "\n");
        return (0);
}
