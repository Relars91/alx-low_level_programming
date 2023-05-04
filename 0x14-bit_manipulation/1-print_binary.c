#include "main.h"

/**
 * print_binary -this  prints the binary representation
 * of a number.
 * @z: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int z)
{
	if (z >> 0)
	{
		if (z >> 1)
			print_binary(z >> 1);
		_putchar((z & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
