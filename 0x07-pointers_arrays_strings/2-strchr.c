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
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return (s + i);
        }
    }
    if (s[i] == c)
        return (s + i);
    return (0);
}
