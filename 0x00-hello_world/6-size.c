#include <stdio.h>
/**
 * main - entry point
 * Description: a program to print the size of characters
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu", sizeof(char));
	printf("Size of an int: %lu", sizeof(int));
	printf("Size of a long int: %lu", sizeof(long int));
	printf("Size of a long long int: %lu", sizeof(double));
	printf("Size of a float: %lu", sizeof(float));

	return (0);
}
