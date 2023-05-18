#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if contains a non-digit char
 * @s: paramter string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a str
 * @s: parameter string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - function handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - program that multiplies two positive numbers.
 * @argc: parameter number of arguments
 * @argv: parameter array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len_1, len_2, len_, x, carry, digit_1, digit_2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len_1 = _strlen(s1);
	len_2 = _strlen(s2);
	len_ = len_1 + len_2 + 1;
	result = malloc(sizeof(int) * len_);
	if (!result)
		return (1);
	for (x = 0; x <= len_1 + len_2; x++)
		result[x] = 0;
	for (len_1 = len_1 - 1; len_1 >= 0; len_1--)
	{
		digit_1 = s1[len_1] - '0';
		carry = 0;
		for (len_2 = _strlen(s2) - 1; len_2 >= 0; len_2--)
		{
			digit_2 = s2[len_2] - '0';
			carry += result[len_1 + len_2 + 1] + (digit_1 * digit_2);
			result[len_1 + len_2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len_1 + len_2 + 1] += carry;
	}
	for (x = 0; x < len_ - 1; x++)
	{
		if (result[x])
			a = 1;
		if (a)
			_putchar(result[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
