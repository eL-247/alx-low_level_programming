#include "main.h"

/**
 * print_last_digit -prints the last digit of a number.
 * @c: value of of in.
 *
 * Return: n itself.
 */

int print_last_digit(int c)
{
	int neg;

	neg = c % 10;
	if (c < 0)
	{
		neg = -1 * (c % 10);
	}

	_putchar('0' + neg);
	return (neg);
}
