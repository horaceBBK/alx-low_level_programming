#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: The character to be checked
 *
 * Description: Determines if a given character is in lowercase.
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
