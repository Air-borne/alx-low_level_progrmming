#include <stdio.h>



int main(void)
{
        char let;
        int num;

        for(num = 0; num < 10; num++)
            putchar((num % 10) + '0');

        for(let = 'a'; let <= 'f'; let++ )
            putchar(let);

        putchar('\n');

        return (0);

}
