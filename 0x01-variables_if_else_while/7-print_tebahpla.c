#include <stdio.h>

/**
 * main - main function
 * A program that prints the lowercase alphabet in reverse, followed by a new line.
 * 
 * Return (0)
 */ 
 
int main(void)
{
        char aphla;

        aphla = 'z';

        while (aphla > 'a')
        {
            putchar(aphla);
            aphla--;
        }
        putchar('\n');

        return 0;   
  
}
