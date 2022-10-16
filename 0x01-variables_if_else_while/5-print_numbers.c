#include <stdio.h>

/**
* main - main function
* A program that prints all single digit numbers of base 10
* Return: zero
*/

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		printf("%i", number);

	printf("\n");

	return (0);
}
