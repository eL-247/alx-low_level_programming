#include <stdio.h>
/**
 * main - main block.
 * Description: use putcar function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
