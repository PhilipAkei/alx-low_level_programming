#include "main.h"
/**
 * _isdigit -  look  for uppercase character.
 * @c: character  test.
 * * Return: 0 if it is not, 1 for digit character 
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
