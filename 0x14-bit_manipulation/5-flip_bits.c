#include "main.h"

/**
 * flip_bits - counts the num of bits to change
 * to get from one num to another
 * @n: first numb
 * @m: second numb
 *
 * Return: No bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, c = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		curr = exclusive >> k;
		if (curr & 1)
			c++;
	}

	return (c);
}
