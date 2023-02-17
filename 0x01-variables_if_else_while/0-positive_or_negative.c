#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Main block
 * assign a random number to the variable
 * check if the number is posetive, zero or negative
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is posetive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
