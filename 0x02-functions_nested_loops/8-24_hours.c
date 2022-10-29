#include "main.h"
/**
 * jack_bauer - prints all possible times
 * Retun: null
 */
void jack_bauer(void)
{
	int a, i, j, k, l;

	a = i = j = k = l = 0;
	while (a < 1440)
	{
		if (l > 9)
		{
			l = 0;
			k++;
		}
		if (k > 5)
		{
			k = 0;
			j++;
		}
		if (j > 9)
		{
			j = 0;
			i++;
		}
		if (i == 3)
		{
			break;/*not nedded but put it here just in case*/
		}
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(':');
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar('\n');
		l++;
		a++;/*terminates session*/
	}
}
