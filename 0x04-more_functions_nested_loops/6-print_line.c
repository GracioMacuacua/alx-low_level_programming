#include "main.h"

/**
* print_line - print a horizontal line
* @n: is teh length of the distance
* Return: void
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}
	_putchar('$');
	_putchar('\n');
}