#include "main.h"

/**
 * main - function prints alphabet in small letters
 * print_alphabet- prints the alphabet in lowercase then a new line
 */

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}
