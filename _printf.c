/**
 * _printf -> A function that rpints to the stdout
 * @format: format is a character string
 * Return: Returns the number of character prnted
 * (excluding the null bytes to ennd output to strings)
 */
#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	int count = 0;
	int i;

	va_list data;

	va_start(data, format);

	for (i = 0; format[i] != '\0';)
	/* Count thr number of characters */
	/* Print to the screen each character counted */
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					/* print the character from the va_arguments */
					count += _putchar(va_arg(data, int));
					break;
				case 's':
					count += string_print(va_arg(data, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					break;
			}
			i += 2;
		}
	}

	return (count);
}
