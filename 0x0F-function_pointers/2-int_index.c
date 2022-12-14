#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of an array if the function matches
 * @array: input array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && cmp != 0)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
