#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/* more headers goes there */



/**
 * main - program entry
 * Description: This is a program to print positives and negatives
 * Return: Always 0 (Success) 
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 0)
					{
						printf("%d is positive\n", n);
					}
					if (n == 0)
					{
						printf("%d is zero\n", n);
					}
					if (n < 0)
					{
						printf("%d is negative\n", n);
					}

					return (0);

}
