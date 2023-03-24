#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints out the character
 * @c: the character we will be printing
 *
 * Return: 1 on success
 * On error, -1 is returned 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
