#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercas
 * @c: string
 * Return: c
 */

char *string_toupper(char *str)
{
	int j;

	for (j = 0; str[j] != '\0' ; j++)
	{
		if (str[j] >= 97 && str[j] <= 122)
			str[j] -= 32;
	}

	return (str);
}

