#include "main.h"

/**
* print_numbers - print the number from 0 to 9
*
* Return: void
*/

void print_numbers(void)
{
	int i;

	/* 48 -> 0 .... 57 -> 9 */
	for (i = 48; i <= 57; i++)
		_putchar(i);
	_putchar('\n');
}
