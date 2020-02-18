#include "holberton.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: nothing.
 */

void _puts(char *str)
{

	char nl = '\n';

	fwrite(str, sizeof(char), _strlen(str), stdout);
	fwrite(&nl, sizeof(nl), 1, stdout);

}
