#include "main.h"

/**
* _ISUPPER(int) - this function checks for uppercase letter
* @c: stores the character to be checked
* Return: check
*/

int _isupper(int c)
{
	int ans;

	if (c >= 'A' && c <= 'Z')
	{
		ans = 1;
	}
	else
	{
		ans = 0;
	}

	return (ans);
}
