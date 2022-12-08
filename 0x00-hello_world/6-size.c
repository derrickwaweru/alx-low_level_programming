#include <stdio.h>
/**
 * main - entry point
 * Description: a program to print the size of characters
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s) \n", sizeof(int));
	printf("Size of a long int: %ld byte(s) \n" , sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(double));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}
