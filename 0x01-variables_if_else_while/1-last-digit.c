#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - entry point
 * Description: a program to print different numbers
 * Return: Always 0 (Success)
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				if (n > 5)
				{
					printf("%d and is greater than 5\n", n);
				}
				if (n == 0)
				{
					printf("%d and is 0\n", n);
				}
				if (6 < n > 0)
				{
					printf("%d and is less than 6 and not 0\n", n);
				}

					return (0);

}