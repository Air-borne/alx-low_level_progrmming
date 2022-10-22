#include "main.h"

/**
* _isupper - this function checks for uppercase letter
* @c: stores the character to be checked
* Return: 1 when condition is true and 0 when false
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
