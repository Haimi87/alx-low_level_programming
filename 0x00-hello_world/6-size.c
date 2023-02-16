#include <stdio.h>
/**
 * main - Entery point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %i byte(s)\n", sizeof(1));
	printf("size of an int: %i byte(s)\n", sizeof(4));
	printf("size of a long int: %i byte(s)\n", sizeof(4));
	printf("size of a long long int: %i byte(s)\n", sizeof(8));
	printf("size of a float: %i byte(s)\n", sizeof(4));
	return (0);
}
