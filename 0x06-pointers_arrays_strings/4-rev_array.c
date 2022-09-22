#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, k = n - 1; i < n / 2; i++, k--)
	{
		j = a[i];
		a[i] = a[k];
		a[k] = j;
	}
}

