#include "holberton.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Input string.
 *
 * Description:
 * This function prints a string character by character using
 * the _putchar function until it reaches the null terminator.
 * It then prints a new line character.
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

