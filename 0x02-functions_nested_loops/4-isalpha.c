#include "main.h"

/**
 * _isalpha: checks for uppercase characters
 * @c: character to be checked
 * Return: Return 1 if uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (( c >= 'A' && c <= 'Z') ||
	   ( c >= 'a' && c <= 'z'))
		return (1);

	else
		return (0);

}
