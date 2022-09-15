#include "main.h"

/**
 * _isupper - sees if a number is a lowercase.
 * @c: value of of in.
 *
 * Return: 0 if not a lowercase. else return 1.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
