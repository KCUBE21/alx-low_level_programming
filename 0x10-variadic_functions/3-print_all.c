#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of typed of arguments passed to the function
 *
 * Description: If the string is NULL, print (nil) instead
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;

	char *separator = "", *str;

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, (float) va_arg(args, double));
					break;
				case 's':
					str =  va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
						i++;
						continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}

