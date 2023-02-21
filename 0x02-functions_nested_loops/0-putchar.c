#include "_putchar.h"
/**
 * main - prints '_putchar' by a new line.
 *
 * Returns: Always 0.
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
