#include <stdio.h>

/**
 * main - prints 0 to 100.
 * Description: if x%3 = 0 print fizz x%5 = 0 print buzz.
 * multiple of both 3 and 5 shpuld print FizzBuzz.
 * Return: always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
