#include "main.h"


/**
 * puts_half - Prints out the first half of a string.
 * @str: input string to print.
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}


	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}


	_putchar('\n');
}
