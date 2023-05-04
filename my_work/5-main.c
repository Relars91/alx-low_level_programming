#include <stdio.h>
#include "main.h"

/**
 * main - checks the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int num;

	num = flip_bits(1024, 1);
	printf("%u\n", num);
	num = flip_bits(402, 98);
	printf("%u\n", num);
	num = flip_bits(1024, 3);
	printf("%u\n", num);
	num = flip_bits(1024, 1025);
	printf("%u\n", num);

	return (0);
}
