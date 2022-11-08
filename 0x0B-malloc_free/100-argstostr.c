#include <stdlib.h>
/**
 * argstostr - concatenates all argument of main program
 * @ac: argument counter
 * @av: argument vector.
 *
 * Return: the argument printed.
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, k;
	char *newStr;

	k = 0;
	size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			size++;

	newStr = malloc((size + ac + 1) * sizeof(char));
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newStr[k] = av[i][j];
			k++;
		}
		newStr[k] = '\n';
		k++;
	}
	newStr[k] = '\0';

	return (newStr);
}
