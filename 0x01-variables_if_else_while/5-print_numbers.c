#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
