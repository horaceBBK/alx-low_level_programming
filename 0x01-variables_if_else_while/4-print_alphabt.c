#include <stdio.h>
/**
 * main - The code's entry point
 * Return: 0 (code successful)
 */

int main(void)
{
	char f;

	f = 'a';
	while
		(f <= 'z') {
			if ((f != 'q' && f != 'e') && f <= 'z')
				putchar(f);
			f++;
		}
	putchar('\n');
	return (0);
}
