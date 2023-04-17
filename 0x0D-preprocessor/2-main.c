#include <stdio.h>

/**
 * main - enters the program to print the file name it was compiled from
 * Return: always zero
 */

int main(void)
{
	printf("%s \n", __FILE__);
	return (0);
}
