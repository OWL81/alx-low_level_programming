#include "holberton.h"

/**
 * puts2 - Prints every other character of a string.
 * @s: Pointer to a string.
 *
 * Description: This function prints characters at even indices of a string
 * by iterating through the string and using _putchar.
 * It then prints a new line.
 */
void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}

	_putchar('\n');
}

