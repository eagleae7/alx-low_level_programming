#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: input char 1
 * @s2: input char 2
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int s1Size, s2Size, i;
	char *conStr;

	i = 0;
	s1Size = 0;
	s2Size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1Size))
		s1Size++;
	while (*(s2 + s2Size))
		s2Size++;
	s2Size++; /*add 1 space to print null*/

	conStr = malloc((s1Size + s2Size) * sizeof(char));
	if (conStr == NULL)
		return (NULL);

	for (i = 0; i < s1Size; i++)
		*(conStr + i) = *(s1 + i);
	for (i = s1Size; i < (s1Size + s2Size); i++)
		*(conStr + i) = *(s2 + i - s1Size);

	return (conStr);
}
