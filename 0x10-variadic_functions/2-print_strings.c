#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints followed by a new line
 * @separator: the string to be printed betwwen strings
 * @n: the number of strings passed to the function
 * @...: a variable number of strings to be printed
 * description: if separator is NULL, it is not printed
 * if one of the stringd if NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{  va_list strings;
	char *str;
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
		printf("(nil)");
		else
		printf("%s", str);
		if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
