#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: string to receive and return
 * @c: character to receive
 * Return: char
 */

char *_strchr(char *s, char c)
{

    while (s[0] != '\0')
    {
        if (s[0] == c)
            return (s);
        else if (s[1] == c)
            return (s + 1);
        s++;
    }
    return (s + 1);
}
