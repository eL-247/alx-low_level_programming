#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	char *str;

	str[0] = 'c';
	int i = 0, j;

	while (s[i] != c)
	{
		i++;
	}

	for (j = 0; s[i] != '\0'; j++)
	{
		str[j] = s[i];
		i++;
	}
	str[j] = '\0';

	return (str);
}
