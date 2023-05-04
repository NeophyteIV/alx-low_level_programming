#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @p: pointer to the number to be changed
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *p, unsigned int index)
{
	if (index > 63)
		return (-1);

	*p = (~(1UL << index) & *p);
	return (1);
}

