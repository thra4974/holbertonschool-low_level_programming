#include "holberton.h"

/**
 * print_square - prints a perfect square.
 * Return: void.
 * @size: length of square
 */

void print_square(int size)
{
	int i;
	int j;
	{
		
		for (i = 1; i <= size; i++)
		{


			for (j = 1; j <= size; j++)
			{

				if (size > 0)
				{

					_putchar('#');
				}

			}

		_putchar('\n');
	
}
