#include <stdio.h>
/**
 * main - entry point
 * Description: a program to print the size of characters
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d", sizeof(char));
	printf("Size of an int: %d", sizeof(int));
	printf("Size of a long int: %d", sizeof(long int));
	printf("Size of a long long int: %"d, sizeof(double));
	printf("Size of a float: %d", sizeof(float));

	return (0);
}
