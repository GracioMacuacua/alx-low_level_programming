#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, num2, res;

	for (num = 0; num <= 9; num++)
	{
		num2 = 0;
		for (; num2 <= 9; num2++)
		{
			if (num * num2 > 9)
			{
				res = (num * num2) / 10;
				_putchar('0' + res);
			}
			else if (num * num2 != 0 || num2 != 0)
				_putchar(' ');
			res = (num * num2) % 10
			_putchar('0' + res);
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
