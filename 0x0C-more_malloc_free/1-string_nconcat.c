#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat -  function that concatenates two strings
 * @s1: is parameter that string to append to
 * @s2: is parameter thatstring to concatenate from
 * @n: is parameter that number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = 0, y = 0, len_1 = 0, len_2 = 0;

	while (s1 && s1[len_1])
		len_1++;
	while (s2 && s2[len_2])
		len_2++;

	if (n < len_2)
		s = malloc(sizeof(char) * (len_1 + n + 1));
	else
		s = malloc(sizeof(char) * (len_1 + len_2 + 1));

	if (!s)
		return (NULL);

	while (x < len_1)
	{
		s[x] = s1[x];
		x++;
	}

	while (n < len_2 && x < (len_1 + n))
		s[x++] = s2[y++];

	while (n >= len_2 && x < (len_1 + len_2))
		s[x++] = s2[y++];

	s[x] = '\0';

	return (s);
}
