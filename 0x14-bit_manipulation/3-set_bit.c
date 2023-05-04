#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @j: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *j, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	*j = (*j | k);

	return (1);
}
