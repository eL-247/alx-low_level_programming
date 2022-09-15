#include "main.h"

/**
 * print_diagonal - prints a diagonla.
 * @n: number for rows.
 * Return: none.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n < 0)
		n = n * -1;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
