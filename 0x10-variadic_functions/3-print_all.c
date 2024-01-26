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

	char *separator = "";

	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if ((format[i] == 'c') || (format[i] == 'i') || (format[i] == 'f') || (format[i] == 's'))
		{
			printf("%s", separator);

			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d",  va_arg(args, int));
					break;
				case 'f':
					printf("%f", (float) va_arg(args, double));
					break;
				case 's':
					{
						char *str =  va_arg(args, char *);
						if (str == NULL)
						{
							printf("(nil)");
						}
						else
						{
							printf("%s", str);
						}
					}

					break;

			}

			separator = ", ";

		}

		i++;

	}

	va_end(args);

	printf("\n");

}

