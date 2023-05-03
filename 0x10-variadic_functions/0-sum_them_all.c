#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates sum of arguments
 * @n: number of arguments
 *
 * Return: sum of arguments, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

