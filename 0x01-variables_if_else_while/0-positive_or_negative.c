#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - main function
 * The code prints out a random number and indicates if it is positive 
 * or negative
 * Return (0)
 */ 

int main(void)
{
        int n;
        

        srand(time(0));
        n  = rand() - RAND_MAX / 2; //assign the random function to random variable
        if (n>0)
                printf("%i is positive\n",n);
        else if (n=0)
                printf("%i is zero\n",n);
        else
                printf("%i negative\n",n);

        return 0;        
}                    
