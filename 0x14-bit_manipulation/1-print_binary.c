#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * input no from most significant bit (MSB) to least significant bit (LSB)
 * @n: number to print in binary
 * start from the MSB
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

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
