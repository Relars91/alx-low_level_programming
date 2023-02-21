#include "main.h"
/**
 * main - Entyr point.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
