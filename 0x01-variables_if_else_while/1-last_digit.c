#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/**
 * main - entry point
 * Description: a program to print random numbers
 * Return: Always 0 (Success)
 */

int main(void)

{

	int n;
	int x;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	x = n % 10;

	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
	{
	printf("and is greater than 5\n");
	}
	if (x == 0)
	{
	printf("and is 0\n");
	}
	if (x < 6 && x != 0)
	{
	printf("and is less than 6 and not 0\n");
	}

	return (0);
}
