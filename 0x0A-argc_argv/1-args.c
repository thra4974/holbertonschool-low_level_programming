#include <stdio.h>
#include "holberton.h"

/**
 * main - prints number of arguments passed into it.
 * @argc: number of arguments passed.
 * @argv: pointer to argument vector.
 * Return: 0
 */

int main(int argc, char *argv[])
{

	{
		printf("%d\n", argc - 1);
	}

	(void) argv;

	return (0);
}
