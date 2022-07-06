#include <stdio.h>
#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: take int c as a parameter
 * @n: the integer to use for checking if n +,-,0
 *
 * Return: 0 or 1 (Success)
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 1)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
