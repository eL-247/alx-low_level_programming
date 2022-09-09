#include <stdio.h>
/**
 * main - main block
 * Description: Prints numbers between 0 to 9 using putchar.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
