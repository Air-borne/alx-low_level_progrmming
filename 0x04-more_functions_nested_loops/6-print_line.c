#include "main.h"

/**
* print_line - Draws a straight line using the character _.
* @n: number of characters to be printed on screen.
*/

void print_line(int n)
{
	int com;

	if (n > 0)
	{
		for (com = 0; com < n; com++)
			_putchar('_');
	}

	_putchar('\n');
}
