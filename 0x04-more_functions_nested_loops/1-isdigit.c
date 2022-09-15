#include "main.h"

/**
 * _isdigit - sees if a number is a lowercase.
 * @c: value of of in.
 *
 * Return: 0 if not a lowercase. else return 1.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
