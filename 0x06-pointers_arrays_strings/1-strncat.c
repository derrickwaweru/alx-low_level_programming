#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @src: The source of strings
 * @dest: Destination of the string
 * @n: the length of the int
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);

}
