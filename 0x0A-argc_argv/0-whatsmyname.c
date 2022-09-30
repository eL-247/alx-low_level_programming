#include <main.h>
#include <stdio.h>

/**
 * main - prints its own name.
 * @argc: number of command line arguments.
 * @argv: array containing the program commanc line argumets.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
