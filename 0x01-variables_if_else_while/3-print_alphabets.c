#include <stdio.h>
/**
 * main - main block.
 * Description: Print the alphabet in lowercase and in uppercase using putchar
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	};

	do {
		putchar(A);
		A++;
	} while (A <= 'Z');

	putchar('\n');

	return (0);
}
