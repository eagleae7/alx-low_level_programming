#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase.
 * This program prints a the alphabet in lowercase
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph = alph + 1;
	}
	putchar('\n');
	return (0);
}
