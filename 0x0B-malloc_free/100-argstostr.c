#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program into a string.
 * @ac: the argument count
 * @av: the argument vector
 * Description: Each argument is followed by a '\n' in the new string.
 * Return: pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		str[r++] = '\n';
	}
	str[r] = '\0';
	return (str);
}
