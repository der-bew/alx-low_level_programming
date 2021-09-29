#include "function_pointers.h"
/**
 *print_name - Prints a name
 *@name: Input name
 *@f: Input pointer to function
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
