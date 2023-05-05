#include "main.h"
/**
 * _strncpy - function that copies a string.
 *
 * @dest: parameter is input
 * @src: parameter is input
 * @n:  parameter is input
 * Return: Always void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}

	return (dest);
}
