#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * function uses a switch statement to determine the type of each argument
 *
 * and prints it accordingly.
 * If the argument is a string,
 * function checks if it is NULL.
 *
 * If NULL,
 * Return: (nill) otherwise
 * Print: the string
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
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

	printf("\n");
	va_end(list);
}
