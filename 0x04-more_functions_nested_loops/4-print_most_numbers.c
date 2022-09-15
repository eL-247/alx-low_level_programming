#include "main.h"

/**
 * print_most_numbers - prints 0 to 9.
 *
 * Return: none.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9 ; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar('0' + i);
	}
	_putchar('\n');
}
