#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array, followed by a new line.
 * @a: Input array.
 * @n: Length of the array.
 *
 * Description: This function prints the elements of the integer array up
 * to a specified
 * length. Elements are separated by commas,
 * and a new line is printed at the end.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index != n - 1)
			printf(", ");
	}

	putchar('\n');
}

