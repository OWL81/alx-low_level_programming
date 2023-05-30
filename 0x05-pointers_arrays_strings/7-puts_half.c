#include "holberton.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Input string.
 *
 * Description: This function prints the second half of a string.
 * If the string length is odd, it includes the middle character.
 */
void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}

