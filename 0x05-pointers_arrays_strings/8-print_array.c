#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 *		followed by a new line
 * @a: A pointer to the array we want to be printed
 * @n: Is the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0 && i < n)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
