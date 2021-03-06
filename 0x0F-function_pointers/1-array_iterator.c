#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a pm on each em of array.
 * @array: pointer to array.
 * @size: size of array.
 * @action: pointer to function to be used.
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (size != '\0' && action != NULL && array != NULL)
			action(array[i]);
	}
}
