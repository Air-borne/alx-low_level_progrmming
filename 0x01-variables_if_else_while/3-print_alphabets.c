#include <stdio.h>

/**
* main - main function
*
* The program prints lowercase alphabets followed by uppercase alphabets
*
* Return: zero
*/

int main(void)
{
char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
