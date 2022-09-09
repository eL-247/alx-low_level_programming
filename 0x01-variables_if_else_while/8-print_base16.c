#include <stdio.h>
/**
 * main - main block.
 * Description: Print nums form 0-9 and alphabests form a-f using putchar.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char b = 'a';

	do {
		putchar(i + '0');
		i++;
	} while (i < 10);

	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
