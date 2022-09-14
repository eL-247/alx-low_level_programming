#include "main.h"

/**
 * _islower - sees if a number is a lowercase.
 * @c: value of of in.
 *
 * Return: 0 if not a lowercase. else return 1.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
