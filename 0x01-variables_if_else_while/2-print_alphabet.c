#include <stdlib.h>
#include <stdio.h>

/**
 * main - 
 * This program prints a the alphabet in lowercase
 * followed by a new line.
 * return: 0 success
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
