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
	int result, i, j;

	j = 0;
	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result == 1)
				return (i);
			j++;
		}
	}
	return (-1);
}
