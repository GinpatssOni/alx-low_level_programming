#include "main.h"
/**
  * _strcmp - compare two strings
  * @s1: first string
  * @s2: second string
  * Return: 0 if equal negative if s1<s2 positive if s1>s2
  */

int _strcmp(char *s1, char *s2)
{
	int rtrn = 0;

	while (*(s1) != '\0' || *(s2) != '\0')
	{
	rtrn = (int) *(s1++) - *(s2++);
	if (rtrn)
	break;
	}
	return (rtrn);
}
