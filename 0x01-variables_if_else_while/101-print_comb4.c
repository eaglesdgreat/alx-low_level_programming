#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '1'; y <= '9'; y++)
		{
			for (z = '2'; z <= '9'; z++)
			{
				if ((x == '0' || (x != y && x < y)) && (y != z && y < z))
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != '7')
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
