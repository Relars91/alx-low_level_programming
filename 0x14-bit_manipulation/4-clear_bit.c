#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @d: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *d, unsigned int index)
{
	unsigned int h;

	if (index > 63)
		return (-1);

	h = 1 << index;

	if (*d & h)
		*d ^= h;

	return (1);
}
