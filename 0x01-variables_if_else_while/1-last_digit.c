#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The entry point of the code.
 *
 * This program will assign a random number to the variable n each time it is executed.
 * Return: Always 0 (code successful).
 */
int main(void)
{
    int n;
    int b;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    b = n % 10;

    if (b > 5)
        printf("Last digit of %d is %d and is greater than 5\n", n, b);
    else if (b == 0)
        printf("Last digit of %d is %d and is 0\n", n, b);
    else
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);

    return (0);
}
