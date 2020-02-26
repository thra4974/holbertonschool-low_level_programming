#include "holberton.h"

/**
 * _puts_recursion - prints a string.
 * @s: pointer to a char 's'.
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');

		return;

	}

	_putchar(s[i]);

	_puts_recursion(s + 1);


}
