#include "main.h"
#include <stdio.h>
/**
 * _puts -  prints a string that followed by a new line
 *
 * @str : parameter is a string
 * Return: Always return string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
