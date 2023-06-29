#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: A pointer to the string that we want to reverse
 */
void rev_string(char *s)
{
	int i, j, size;
	char tmp;

	i = 0;
	j = 0;
	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	for (i = size - 1; i >= size / 2; i--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j++] = tmp;
	}
}
