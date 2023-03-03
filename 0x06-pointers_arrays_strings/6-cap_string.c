#include "main.h"
/**
  * cap_string - capitalizes all words of a string.
  * @s: source string
  * Return: pointer to s string
  */

char *cap_string(char *s)
{
	char *rtrn = s;
	char sps[] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}', '~'};
	char *sp = sps;
	char sp_flag = 0;

	while (*s != '\0')
	{
	sp = sps;
	while (*sp != '~')
	{
	if (*sp++ == *s)
	{
	sp_flag = 1;
	break;
	}
	}
	if (sp_flag)
	{
	sp_flag = 0;
	if (*(s + 1) > 96 && *(s + 1) < 123)
	{
	s++;
	*s = *s - 32;
	}
	}
	s++;
	}
	return (rtrn);
}
