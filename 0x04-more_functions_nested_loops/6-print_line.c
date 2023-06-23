#include "main.h"

/**
* print_line - print a horizontal line
* @n: is teh length of the distance
* Return: void
*/

void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	_putchar('\n');
}
