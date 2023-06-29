#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: A pointer to first integer
 * @b: ThA poiter to the second integer
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}