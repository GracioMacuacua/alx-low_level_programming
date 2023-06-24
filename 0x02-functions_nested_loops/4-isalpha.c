#include "main.h"

/**
 * _isalpha - Checks if a character is a aphabetic char
 * @c: The character to be checked
 * Return: 1 if the character is a alphabetic char, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
