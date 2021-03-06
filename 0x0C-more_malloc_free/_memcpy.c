#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copies memory from src to dest.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * @n: pointer to byte copied.
 * Return: nothing.
 */

void _memcpy(void *dest, void *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int i;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
}
