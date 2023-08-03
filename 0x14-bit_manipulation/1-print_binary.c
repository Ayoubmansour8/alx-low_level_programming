#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 0;

	for (i = 63; i >= 0; i--)
	{
		mask = 1UL << i;
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}

