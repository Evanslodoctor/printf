/**
 * string_print -> function to print the string of a charcter
 * @string: string
 * Return: Return number of string cvharacters
 */
#include "main.h"

int string_print(char *string)
{
	int count = 0;
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		count += _putchar(string[i]);
	}
	return (count);
}
