#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: The destination memory.
 * @src: The source memory.
 * @n: The number of bytes to be copied.
 *
 * Return: A pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int r;

        for (r = 0; r < n; r++)
        {
                dest[r] = src[r];
        }

        return (dest);
}
