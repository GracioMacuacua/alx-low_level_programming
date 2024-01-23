#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: a pointer to a new string containing the s1 and s2 contents.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int sizeS1, sizeS2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	sizeS1 = sizeS2 = 0;

	for (; *(s1 + sizeS1) != '\0'; sizeS1++)
		;

	for (; *(s2 + sizeS2) != '\0'; sizeS2++)
		;

	ptr = (char *)malloc(sizeof(char) * (sizeS1 + sizeS2 + 1));

	if (ptr == NULL)
		return (NULL);

	i = j = 0;

	for (; *(s1 + i) != '\0'; i++)
		*(ptr + i) = *(s1 + i);

	for (; *(s2 + j) != '\0'; j++)
		*(ptr + i++) = *(s2 + j);

	*(ptr + i + 1) = '\0';

	return (ptr);
}
