#include "main.h"
/**
 * positive_or_negative - decides whether the number is positive or negative
 * i - it is the number we input
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
