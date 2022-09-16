#include <stdio.h>
#include "main.h"

/**
 * main - entry point.
 * Description: Print the largest prime factor of the number 612852475143.
 * Return: 0
 */

int main(void)
{
	int divider;

	long num = 612852475143;

	for (divider = 2; num != 1; divider++)
	{
		if (num % divider == 0)
		{
			printf("%ld\n", divider);
			break;
		}
	}
	printf("%ld\n", divider);

	return (0);
}
