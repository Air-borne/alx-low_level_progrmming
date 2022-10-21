#include "holberton.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int ash, dex;

	if (size > 0)
	{
		for (ash = 1; ash <= size; ash++)
		{
			for (dex = size - ash; dex > 0; dex--)
				_putchar(' ');

			for (dex = 0; dex < ash; dex++)
				_putchar('#');

			if (ash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}



