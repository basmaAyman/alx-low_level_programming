#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte.
 * @s: is parameter that starting address of memory to be filled.
 * @b: is parameter that  the desired
 * @n: is parameter that  no bytes to be changed
 *
 * Return: array n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
