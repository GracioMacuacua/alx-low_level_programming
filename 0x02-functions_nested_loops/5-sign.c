#include "main.h"

/**
 * print_sign - Checks the sign of a number
 * @n: The number to be checked
 * Return: 1 if the number is greater than zero, 0 if it is zero, -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
