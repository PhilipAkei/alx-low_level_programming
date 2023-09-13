#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name -  Print a name from a function pointer h
 * @name: char string
 * @f: function pointer h that takes a string argument 
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
