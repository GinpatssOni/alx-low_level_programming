#include "main.h"
/**
  * _isalpha - checks for alphabitic charachter
  * @c: The character to check
  * Return: return 1 if letter 0 otherwise
  */

int _isalpha(int c)
{
	return (((c <= 122 && c >= 97) || (c <= 90 && c >= 65)) ? 1 : 0);
}
