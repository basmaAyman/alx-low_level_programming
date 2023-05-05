#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: parameter is array
 * @n: parameter is number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int B;

	for (x = 0; x < n--; x++)
	{
		B = a[x];
		a[x] = a[n];
		a[n] = B;
	}
}
