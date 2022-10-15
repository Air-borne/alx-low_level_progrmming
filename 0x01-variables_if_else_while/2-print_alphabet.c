#include <stdio.h>

/*
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */



int main(void)
{

	char alphabet;
	
	alphabet='a';

        while(alphabet <= 'z')
	{
	//printing the alphabets
	putchar(alphabet);

	//increasing the value by 1
	alphabet++;
	}
        putchar('\n');

	return 0;
}
