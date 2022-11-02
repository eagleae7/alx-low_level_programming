#include "main.h"
/**
 * _puts_recursion - uses recursion
 * @s: string to recurse through
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
