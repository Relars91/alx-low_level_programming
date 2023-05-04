#include <stdio.h>
#include "main.h"

int main(void)
{
	int endian;

	endian = get_endianness();
	if (endian != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}

	return (0);
}
