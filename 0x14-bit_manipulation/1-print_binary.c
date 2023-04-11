#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @m: number to print in binary
 */
void print_binary(unsigned long int m)
{
	int x, count = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = m >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
