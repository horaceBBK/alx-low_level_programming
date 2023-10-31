#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 *
 * Description: This function concatenates two strings and returns
 * a new string which is the result of concatenating s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = concat_index = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[concat_index] != '\0')
		concat_index++;

	concat_str = malloc(sizeof(char) * (i + concat_index + 1));

	if (concat_str == NULL)
		return (NULL);

	i = concat_index = 0;
	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}

	while (s2[concat_index] != '\0')
	{
		concat_str[i] = s2[concat_index];
		i++, concat_index++;
	}

	concat_str[i] = '\0';
	return (concat_str);
}
