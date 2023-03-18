#include <stdio.h>
/**
 * main - prints numbers 0-9 without using char or printf
 * Return: always zero
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
