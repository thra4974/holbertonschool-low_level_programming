#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - adds two positive numbers.
 * @argc: number of arguments passed to program.
 * @argv: pointer to argument vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	for (i  = 0; i < argc; i++)
	{
		if (atoi(argv[i]) > INT_MIN && atoi(argv[i]) < INT_MAX)
		{

			if (argc == 1)
			{
				printf("0\n");
			}

			else
			{

				for (i = 1; i < argc; i++)
				{
				sum = sum + (atoi(argv[i]));
				}

			       printf("%d\n", sum);
			}
		}

		else if (atoi(argv[i]) > CHAR_MIN && atoi(argv[i]) < CHAR_MAX)
		{
			printf("Error\n");
			return (1);
		}
	}

}
