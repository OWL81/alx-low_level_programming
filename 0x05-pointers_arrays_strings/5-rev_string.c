#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Prints a reversed string.
 * @s: Pointer to a string.
 *
 * Description:
 * This function prints a string in reverse order by swapping
 * characters from the beginning and end of the string. It uses
 * pointer manipulation to achieve the reversal. It also terminates
 * the reversed string with a null character.
 */

void rev_string(char *s)
{
	int a, len;
	char *begin, *end = s;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
	{
		end++;
	}
	len = a + 1;
	begin = s;

	for (a = 0; a < len / 2; a++)
	{
		char x;

		x = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}

	s[len] = '\0';
}
