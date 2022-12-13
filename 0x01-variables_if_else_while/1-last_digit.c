#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/**
 * main - entry point
 * Description: a program to print random numbers
 * Return: Always 0 (Success)*/

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				if (n > 5)
				{
					printf("Last digit of %d is %s and is greater than 5\n", n);
				}
				if (n == 0)
				{
					printf("Last digit of %d is %s and is 0\n", n);
				}
				if (n < 6 && n!=0)
				{
					printf("Last digit of %d is %s and is less than 6 and is not 0\n", n);
				}

					return (0);

}
