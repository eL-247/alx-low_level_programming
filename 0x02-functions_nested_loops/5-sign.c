#include "main.h"

/**
 * print_sign -checks a number\'s sign.
 * @c: value of of in.
 *
 * Return: 0 if zero -1 if its negative else return 1.
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(c + '0');
		return (0);
	}
}
