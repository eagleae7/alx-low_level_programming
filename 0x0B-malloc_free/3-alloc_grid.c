#include <stdlib.h>
/**
 * alloc_grid - Initializes with 0 a matrix
 * @width: number of columns.
 * @height: number of rows.
 *
 * Return: pointer to the matrix.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, x, f;

	i = j = x = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	/* using typecasting (int *) to dereference values */
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (f = 0; f < i; f++)
				free(arr[f]);
			free(arr);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (x = 0; x < width; x++)
			arr[j][x] = 0;
	}
	return (arr);
}
