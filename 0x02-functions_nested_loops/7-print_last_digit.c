#include "main.h"
/**
  * print_last_digit - print the last digit of a number
  * @n: The number
  * Return: return the value of the last digit
  */

int print_last_digit(int n)
{
	int l = n % 10;

	if (l >= 0)
	_putchar('0' + l);
	if (l < 0)
	_putchar('0' + (l = -l));
	return (l);
}
