#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: first string
 * @s2: second string
 *
 * Description: Compares two strings.
 * Return: negative if s1 < s2, 0 if they're equal, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
