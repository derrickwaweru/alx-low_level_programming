#include "main.h"

/**
 * _islower - checks if a character is lowecase
 * Return: 1 if character is uppercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <='z')

		return (1);

	else
		return (0);
}