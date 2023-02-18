#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - program antry point
  *
  * Return: Always Return 0
  */

int main(void)
{
	int c;
	int c2;
	int c3;
	int c2rm;
	int c3rm1;
	int c3rm2;

	c = 48;
	c2 = 49;
	c2rm = 49;
	c3 = 50;
	c3rm1 = 50;
	c3rm2 = 50;
	while (c < 57)
	{
		while (c2 < 58)
		{
			while (c3 < 58)
			{
				putchar(c);
				putchar(c2);
				putchar(c3++);
				if (c == 55)
				break;
				putchar(',');
				putchar(' ');
			}
		c2++;
		c3 = ++c3rm1;
		}
	c++;
	c2 = ++c2rm;
	c3 = ++c3rm2;
	c3rm1 = c3;
	}
	putchar('\n');
	return (0);
}
