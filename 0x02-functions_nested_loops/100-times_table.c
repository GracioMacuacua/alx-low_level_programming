#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number to its times table
 */
void print_times_table(int n)
{
	int i, j, tmp, res;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				tmp = i * j;

				if (j > 0 && j <= n)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (j > 0 && j <= n && tmp < 100)
					_putchar(' ');
				if (tmp > 99)
				{
					res = tmp / 100;
					_putchar('0' + res);
					res = (tmp / 10) % 10;
					_putchar('0' + res);
				}
				else if (tmp > 9)
				{
					res = tmp / 10;
					_putchar('0' + res);
				}
				else if (tmp != 0 || j != 0)
					_putchar(' ');
				res = tmp % 10;
				_putchar('0' + res);
			}
			_putchar(10);
		}
	}
}
