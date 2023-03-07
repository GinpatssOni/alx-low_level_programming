#include "main.h"
/**
  * _strspn - gets the length of a prefix substring.
  * @s: string to search
  * @accept: string to search with
  * Return: number of bytes.
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int occs = 0;
	char *ref = accept;

	while (*s != 32)
	{
	while (*ref)
	{
	if (*s == *ref)
	occs++;
	ref++;
	}
	s++;
	ref = accept;
	}
	return (occs);
}
