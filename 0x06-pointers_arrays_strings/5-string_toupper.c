#include "main.h"
/**
  * string_toupper - changes all lowercase letters of a string to uppercase.
  * @c: source string
  * Return: pointer to s string
  */

char *string_toupper(char *c)
{
	char *rtrn = c;

	while (*c != '\0')
	{
	if (*c > 96 && *c < 123)
	*c = *c - 32;
	c++;
	}
	return (rtrn);
}
