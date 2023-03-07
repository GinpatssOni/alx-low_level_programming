#include "main.h"
/**
  * _strpbrk - ------------------------------.
  * @s: ------------------------------------
  * @accept: ----------------------------------
  * Return: -------------------------------
  */

char *_strpbrk(char *s, char *accept)
{
	char *occs = 0x00;
	char *ref = accept;

	while (*s)
	{
	while (*ref)
	{
	if (*s == *ref)
	{
	occs = s;
	return (occs);
	}
	ref++;
	}
	s++;
	ref = accept;
	}
	return (occs);
}
