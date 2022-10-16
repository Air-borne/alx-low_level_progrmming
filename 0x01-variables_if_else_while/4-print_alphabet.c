#include <stdio.h>

/**
* main - main function
* A program that prints the alphabet in lowercase jumping e and q,
* Return: zero
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
