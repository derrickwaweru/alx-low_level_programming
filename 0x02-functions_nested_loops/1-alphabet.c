#include "main.h"

/**
 * main - function prints alphabet in small letters
 * Return:the alphabet in small case:
 */

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}
