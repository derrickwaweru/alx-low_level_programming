#include "main.h"

/**
 * main - function to print the length of a string
 *
 * Return: Always 0
 */

int _strlen(char *s)

{
	int a = 0;

	for (; *s++;)

		a++;

	return (a);

}
