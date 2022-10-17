#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * Description: 'This program prints the alphabet in lower and upper case'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alph = 'a';
	int ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph = alph + 1;
	}
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH = ALPH + 1;
	}
	putchar('\n');
	return (0);
}
