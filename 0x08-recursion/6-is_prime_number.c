#include "main.h"

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 *                  otherwise return 0.
 * @n: Number to be evaluated.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}

/**
 * is_prime - Returns 1 if the input integer is a prime number,
 *            otherwise return 0.
 * @n: Number to be evaluated.
 * @i: Number to be evaluated.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime(int n, int i)
{
	if (n % i == 0 && i != n)
		return (0);
	if (n % i == 0 && i == n)
		return (1);
	return (is_prime(n, i + 1));
}
