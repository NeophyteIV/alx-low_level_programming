#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a dec num
 * @b: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int b, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (b >> index) & 1;

	return (bit_val);
}
