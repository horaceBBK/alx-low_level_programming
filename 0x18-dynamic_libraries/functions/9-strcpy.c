#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte, to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0, b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}

	for (; b < a; b++)
	{
		dest[b] = src[b];
	}

	dest[a] = '\0';
	return (dest);
}
