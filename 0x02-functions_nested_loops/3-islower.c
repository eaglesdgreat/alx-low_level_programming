#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: take int c as a parameter
 * @c: the integer to use for checking if lower
 *
 * Return: 0 or 1 (Success)
 */

int _islower(int c)
{
	if (islower(putchar(c)))
	{
		return (1);
	}

	return (0);
}
