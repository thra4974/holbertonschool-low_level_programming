#include "holberton.h"

/**
 * _isdigit - checks for digit ) 0 - 9
 * Return: 1 if c is digit, 0 otherwise.
 * @c: int parameter for _isdigit()
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

		return (1);
	else
		return (0);
}
