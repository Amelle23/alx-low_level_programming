#include <stdio.h>

/**
 * main - enters the program
 * Return: always zero
 */

int main(void)
	{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
