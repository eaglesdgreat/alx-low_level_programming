#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * print_last_digit - Function that print last digit
 *
 * @n: the parameter
 *
 * Return: the last integer digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8;
	} else
	{
		last_digit = abs(n) % 10;
		_putchar('0' + last_digit);
	}

	return (last_digit);
}
