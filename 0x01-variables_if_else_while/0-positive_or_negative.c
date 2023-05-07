#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	srand(time(0));
	m = rand() - RAND_MAX / 2;
	if (m > 0)
	{
		printf("%d is positive\m", m);
	}
	else if (m == 0)
	{
		printf("%d is zero\m", m);
	}
	else
	{
		printf("%d is negative\m", m);
	}
	return (0);
}

