#include "main.h"
/**
  * print_sign - print the sing of a number
  * @n: The number to check
  * Return: return 1 if greater than zero 0 if zero, -1 if less than zero
  */

int print_sign(int n)
{
	int rtrn;

	if (n < 0)
	{
	_putchar('-');
	rtrn = -1;
	}
	if (n > 0)
	{
	_putchar('+');
	rtrn = 1;
	}
	if (n == 0)
	{
	_putchar('0');
	rtrn = 0;
	}
	return (rtrn);
}
