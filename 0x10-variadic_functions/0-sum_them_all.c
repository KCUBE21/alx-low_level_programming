#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all it's parameters
 * @n: The number of parameters passed to the function
 * @...: The number of arguments to calculate the sum
 *
 * Return: if n == 0 - 0
 *	Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	if (n == 0)
		return (0);


	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
