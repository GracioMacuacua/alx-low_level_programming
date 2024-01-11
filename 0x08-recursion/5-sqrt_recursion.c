#include "main.h"

/**
 * getsqrt - Returns the natural square root of a number.
 * @n: Number to be evaluated.
 * @x: Number to be evaluated.
 *
 * Return: The natural square root of a number.
 */
int getsqrt(int n, int x)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (x > n / 2)
		return (-1);

	if (n != x * x)
		return (getsqrt(n, x + 1));

	if (n == x * x)
		return (x);

	return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to be evaluated.
 *
 * Return: The natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (getsqrt(n, 0));
}
