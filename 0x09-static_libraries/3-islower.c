#include "main.h"

/**
 * _islower - Checks if the case of a character is lower
 * @c: The character to be checked
 * Return: 1 if the character's case is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
