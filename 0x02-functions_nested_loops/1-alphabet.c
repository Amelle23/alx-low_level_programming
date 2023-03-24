#include "main.h"

/**
 * print_alphabet - prints all alpha in lower case
 */

void print_alphabet(void)
{
	char lowerletter;

	for (lowerletter = 'a'; lowerletter <= 'z'; lowerletter++)
		_putchar(lowerletter);
	_putchar('\n');
}
