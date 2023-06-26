#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: The width and height of the triangle
 */
void print_triangle(int size)
{
	int i, j, ctrl;

	if (size > 0)
	{
		ctrl = size -1;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (ctrl > j)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
			ctrl--;
		}
	}
	else
		_putchar('\n');
}