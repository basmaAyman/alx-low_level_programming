#include "main.h"

/**
 * binary_to_uint - converts a bin num to unsigned int
 * @b: string bin
 * Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int dec_num = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_num = 2 * dec_num + (b[k] - '0');
	}

	return (dec_num);
}
