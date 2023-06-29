#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: A pointer to the string we want to print
 */
void puts_half(char *str)
{
	int size, i;

	size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	if (size % 2 == 0)
		i = size / 2;
	else
		i = size - ((size - 1) / 2);

	for (; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
