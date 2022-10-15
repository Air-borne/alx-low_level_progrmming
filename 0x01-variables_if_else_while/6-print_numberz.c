#include <stdio.h>

/**
 * main - main function
 * A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * 
 * Return (0)
 */ 
int main(void)
{

        int digit;

        for (digit = 0; digit < 10; digit++)
        putchar((digit % 10) + '0');
            
        putchar('\n');
         
        return (0);
}
