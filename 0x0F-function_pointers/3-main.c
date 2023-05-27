#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints value of simple operations
 * @argc: no arguments
 * @argv: An array of pointers
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num_1, num_2;
	char *opp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	opp = argv[2];
	num_2 = atoi(argv[3]);

	if (get_op_func(opp) == NULL || opp[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opp == '/' && num_2 == 0) ||
	    (*opp == '%' && num_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opp)(num_1, num_2));

	return (0);
}
