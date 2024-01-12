#include "main.h"

/**
* _isupper - check the char if is uppercase
* @c: is the char to be checked
*
* Return: 1 if char c is uppercase,otherwise 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
