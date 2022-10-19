#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times
* in lowercase followed by a new line.
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int count;

	while (count < 10)
	{
		char print;

		for (print = 'a'; print <= 'z'; print++)
		_putchar(print);
		count++;
	}
	_putchar('\n');

}
