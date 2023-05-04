#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @d: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *d)
{
	int c;
	unsigned int dec_val = 0;

	if (!d)
		return (0);

	for (c = 0; d[c]; c++)
	{
		if (d[c] < '0' || d[c] > '1')
			return (0);
		dec_val = 2 * dec_val + (d[c] - '0');
	}

	return (dec_val);
}

