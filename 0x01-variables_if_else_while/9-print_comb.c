#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
