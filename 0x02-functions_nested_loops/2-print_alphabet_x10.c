#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always void
*/

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');

		n++;
	}
}
