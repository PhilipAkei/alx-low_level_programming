#include "main.h"
/**
 * _isupper -programed allowed check for uppercase 
 * @c: variable text
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else 
{
return (0);
}
}
