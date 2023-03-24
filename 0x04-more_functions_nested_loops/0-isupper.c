#include "main.h"

/**
 * _isupper - checks if letter is upper case
 * @c: is the letter we will check
 * Return: 1 is upper and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
