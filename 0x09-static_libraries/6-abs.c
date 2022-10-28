#include "main.h"

/**
 * _abs -checks a number\'s sign.
 * @c: value of of in.
 *
 * Return: n itself.
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}
