#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function that reverses the content of an array of integers.
 *
 * @a: a is the array
 * @n: Where n is the number of elements of the array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
   int tmp, idx;

	for (idx = n - 1; idx >= n / 2; idx--)
	{
		tmp = a[n - 1 - idx];
		a[n - 1 - idx] = a[idx];
		a[idx] = tmp;
	}
}
