#include "main.h"

/**
 *  _isupper -  checks for uppercase character
 * @c : the input char to check
 *
 * Return: 1 for upper letter or 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{

		return (1);
	}
	else
	{
		return (0);
	}
}
