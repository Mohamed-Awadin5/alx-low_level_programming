#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to be checked
 * Return: the absolute value of the integer.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
