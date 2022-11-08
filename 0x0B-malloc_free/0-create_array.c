#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: char for initialized the array.
 *
 * Return: the string initialized.
 */

char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    if (size == 0)
        return (NULL);
    arr = malloc(size * sizeof(char));
    if (arr == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
        arr[i] = c;
    return (arr);
}
