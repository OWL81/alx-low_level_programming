#include "main.h"

/**
 * print_spaces - prints spaces.
 * @n: the number of spaces to print.
 */
void print_spaces(int n)
{
	for (int i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}

/**
 * print_number - prints an integer as characters.
 * @n: the number to print.
 */
void print_number(int n)
{
	if (n >= 100)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int row, col, product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				product = row * col;

				if (col != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (product < 100)
						print_spaces(1);
					if (product < 10)
						print_spaces(1);
				}

				print_number(product);
			}
			_putchar('\n');
		}
	}
}

