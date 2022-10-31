#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, st1, st2;

	for (i = 0; i <= (size - 1); i++)
	{
		st1 =  (size + 1) * i;
		sum1 = sum1 + *(a + st1);
	}

	for (j = 1; j <= size; j++)
	{
		st2 = (size - 1) * j;
		sum2 = sum2 + *(a + st2);
	}
	printf("%d, %d\n", sum1, sum2);
}
