#include <stdio.h>

void print_msg(void) __attribute__ ((constructor));

/**
 * print_msg - prints a msg before the main func is executed
 *
 * Return: Nothing.
 */

void print_msg(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
