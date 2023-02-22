#include "main.h"
/**
  * print_alphabet_x10 - print lowercase alphabets x10
  *
  * Return: nothing
  */

void print_alphabet_x10(void)
{
	char x = 97;
	int cont = 1;
	while(cont <= 10)
	{
	
		while (x <= 122)
		{
		_putchar(x++);
		}
		_putchar('\n');
		x=97;
		cont++;
	}
}
