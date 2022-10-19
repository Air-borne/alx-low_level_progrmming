#include "main.h"

/**
* _islower - checks for a lowercase character
*
* The function returns 1 if c is lowercase and
* return 0 if otherwise
*
* @c: parameter for function
*
* Return: value of the variable check.
*/


int _islower(int c)
{
	int check;

	if (c >= 'a' && c <= 'z')
	{
		check = 1;
	}
	else
		check = 0;

	return (check);

}
