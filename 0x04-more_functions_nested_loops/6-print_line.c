#include "main.h"

/**
 * print_line - prints a straight line.
 * @n: number of dashes.
 * Return: none.
 */

void print_line(int n)
{
	int i = 0;

	if (n < 0)
		n = n * -1;

	while (i < n)
	{
		_putchar('_');

		i++;
	}
	_putchar('\n');
}
