#include <stdio.h>
#include "main.h"

/**
 * main - checks the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int num;

	num = 1024;
	set_bit(&num, 5);
	printf("%lu\n", num);
	num = 0;
	set_bit(&num, 10);
	printf("%lu\n", num);
	num = 98;
	set_bit(&num, 0);
	printf("%lu\n", num);

	return (0);
}
