#include <unistd.h>

/**
 * main - Entry point
 * Description: prints "A funtion that print without printf and puts"*
 * Return: Always 0 (Success)
 */

int main(void)
{
	char stri[] = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";

	write(2, stri, 70);
	return (1);
}
