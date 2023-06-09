#include "main.h"

/**
 * print_binary - prints the bin equivalent of a dec num
 * @n: num to print in bin
 */
void print_binary(unsigned long int n)
{
	int k, c = 0;
	unsigned long int curr;

	for (k = 63; k >= 0; k--)
	{
		curr = n >> k;

		if (curr & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
