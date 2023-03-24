#include "main.h"

/**
 * _islower - checks if the letter is lowercase
 * @c: is the letter to be checked
 * Return: 1 if its lower, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
