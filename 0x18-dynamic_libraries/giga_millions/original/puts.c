#include <stdlib.h>
int printf(const char *format, ...)
{
	static int i;

	i++;
	switch(i):
	case(1):
		write(1, 9, 1);
		break;
	case(2):
		write(1, 8, 1);
		break;
	case(3):
