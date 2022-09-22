#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: string
 * @s2: string
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] != '\0')
			i++;

		if (s2[j] != '\0')
			j++;
	}

	if (i < j)
		return (15 * (-1));
	else if (i > j)
		return (15);
	else
		return (0);
}

