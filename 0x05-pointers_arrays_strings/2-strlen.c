#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Input string.
 *
 * Return: Length of the string.
 *
 * Description:
 * This function calculates the length of a string by iterating
 * through each character until it reaches the null terminator.
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;

	return (index);
}

