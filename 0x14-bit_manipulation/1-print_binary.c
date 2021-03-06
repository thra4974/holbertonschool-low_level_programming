#include "holberton.h"

/**
 * print_binary - prints binary rep of number
 * @n: number to be converted to binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin = n;

	if (n == 0)
		_putchar('0');
	while (bin > 0)
	{
		if ((bin & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		bin = bin >> 1;
	}
}
