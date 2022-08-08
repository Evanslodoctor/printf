#include <stdarg.h>

int _printf(const char *format, ...)
{
	int count, index = 0;
	va_list data;

	va_start(data, format);
	/*
	 * example : _printf("Hello World")
	 * check if the string != % and check if the character to be printed is not equal to the last charcter (i.e '\0')
	 */
	for (;format[index] != '%' && format[index] != '\0';index++)
	{
		count = count + _putchar(format[index]);

		return (count);
	}	
}
