#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: if is null.
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
