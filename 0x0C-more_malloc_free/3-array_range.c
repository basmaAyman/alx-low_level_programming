#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function thatcreates an array of integers
 * @min: is parameter that minimum range of values stored
 * @max: parameter maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x, size_;

	if (min > max)
		return (NULL);

	size_ = max - min + 1;

	ptr = malloc(sizeof(int) * size_);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}
