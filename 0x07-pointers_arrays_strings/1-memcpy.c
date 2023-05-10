#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest:paramter that memory where is stored
 *@src:paramter that memory where is copied
 *@n: paramter that number of bytes
 *
 *Return:  memory n bytes 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;
	int i = n;

	for (; y < i; y++)
	{
		dest[y] = src[y];
		n--;
	}
	return (dest);
}
