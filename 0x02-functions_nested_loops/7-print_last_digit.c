#include "main.h"

/**
 * print_last_digit - Gets the last digit of a given number
 * @n: The number to be
 * Return: The last digit of a number
 */
int print_last_digit(int n)
{
	int res;

	res = n >= 0 ? n % 10 : -n % 10;
	_putchar('0' + res);
	return (res);
}