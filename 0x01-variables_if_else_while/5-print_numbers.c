#include <stdio.h>
/**
 * main - main block.
 * Description: Prints numbers less than 10.
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
