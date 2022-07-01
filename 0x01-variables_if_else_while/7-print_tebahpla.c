#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char stri[100] = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	x = strlen(stri) - 1;
	while (x >= 0)
	{
		putchar(stri[x]);
		x--;
	}
	putchar('\n');
	return (0);
}
