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
    int i;
    int x = 0;
    int y = 0;

    for (i = 0; i < size; i++)
    {
        x += a[(i * size) + i];
        y += a[(size - 1) + ((size - 1) * i)];
    }
    printf("%d, %d\n", x, y);
}
