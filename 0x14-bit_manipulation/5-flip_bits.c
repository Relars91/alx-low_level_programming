#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @g: number one.
 * @p: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int g, unsigned long int p)
{
	unsigned int gbits;

	for (gbits = 0; g || p; g >>= 1, p >>= 1)
	{
		if ((g & 1) != (p & 1))
			gbits++;
	}

	return (gbits);
}
