#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
