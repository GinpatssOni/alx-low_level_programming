#include "main.h"
/**
  * _strchr -  locates a character in a string.
  * @s: string to search
  * @c: character to search with
  * Return: pointer to the first occurrence of the character c in the string s
  * or NULL if the character is not found.
  */

char *_strchr(char *s, char c)
{
	char *rtn = NULL;

	while (s)
	{
	if (*(s++) == c)
	{
	rtn = --s;
	break;
	}
	}
	return (rtn);
}
