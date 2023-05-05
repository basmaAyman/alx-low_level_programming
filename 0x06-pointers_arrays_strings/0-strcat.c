#include "main.h"

/**
 * _strcat - concatenates the two strings
 * @dest: parameter is input
 * @src: parameter is input
 *
 * Return: Always void
 */

char *_strcat(char *dest, char *src)
{
	int c1_;
	int c2_;

	c1_ = 0;

	while (dest[c1_] != '\0')
	{
		c1_++;
	}
	c2_ = 0;

	while (src[c2_] != '\0')
	{
		dest[c1_] = src[c2_];
		c1_++;
		c2_++;
	}

	dest[c1_] = '\0';

	return (dest);
}
