#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a copy of *str to new allo. memory.
 * @str: pointer to string.
 * Return: pointer to new string which is duplicate of str.
 */

char *_strdup(char *str)
{

	char *dup;
	char *p;
	int i = 0;

	while (str[i])
		i++;
	dup = malloc(i + 1);
	p = dup;

	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (dup);

}
