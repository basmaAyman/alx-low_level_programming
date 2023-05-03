#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two integers value
 * @a: parameter is a integer number
 * @b: parameter is a integer number
 * Return : always return  void
 */

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
