#include <main.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc- initializes memory spaces with zero.
 * @nmemb: string 1.
 * @size: string 2, concatenated to 1
 *
 * Return: pointer to the concatenated string.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *n_arry;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	n_arry = mem;

	for (i = 0; i < (size * nmemb); i++)
		n_arry[i] = '\0';

	return (mem);
}
