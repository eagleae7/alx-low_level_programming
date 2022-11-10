#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of new memory array.
 * 
 * Return: the string initialized.
 */
void *malloc_checked(unsigned int b)
{
	void *al;

	al = malloc(b);
	if (al == NULL)
		exit(98);
	return (al);
}
