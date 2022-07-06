#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Function that print last digit
 *
 * @n: the parameter
 *
 * Return: the last integer digit
 */

int print_last_digit(int n)
{
	int last_digit, abVal;

	abVal = (n < 0) ? -((unsigned int)n) : (unsigned int)n;

	last_digit = abVal % 10;
	_putchar('0' + last_digit);

	return (last_digit);
}
