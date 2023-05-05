#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * strings using at most n bytes from src
 * @dest: parameter is input
 * @src: parameter is input
 * @n:  parameter is input
 * Return: Always void
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}
