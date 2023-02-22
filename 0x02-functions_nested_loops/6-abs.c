#include "main.h"
/**
  * _abs - computes the absolute value of an integer.
  * @n: The number to check
  * Return: return the absolute value.
  */

int _abs(int n)
{
	int rtrn;

	if (n < 0)
	{
	rtrn = -n;
	}
	if (n > 0)
	{
	rtrn = n;
	}
	if (n == 0)
	{
	rtrn = 0;
	}
	return (rtrn);
}
