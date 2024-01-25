#include "function_pointers.h"

/**
 * int_index - compare elements in an array
 *
 * @array: the array used
 * @size: size of @array
 * @cmp: a function pointer
 *
 * Return: the index of the element that match
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
}
