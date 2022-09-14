#include "main.h"

/**
 * _isalpha - sees if its a lettes or not.
 * @c: value enterd.
 *
 * Return: 0 if not a letter. else return 1.
 */

int _isalpha(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122) 
		return(1);
	else
		return (0);
}
