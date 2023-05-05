#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @n: paramter is input value
 * Return: Always return n
 */

char *leet(char *n)
{
	int x, y;
	char a_1[] = "aAeEoOtTlL";
	char a_2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == a_1[y])
			{
				n[x] = a_2[y];
			}
		}
	}
	return (n);
}
