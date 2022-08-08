/**
 * main -> Test files
 * Return: Always 0
 */

#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
	int n, a, b, c;

	n = _printf("Hello world");
	printf("\nn = %d \n", n);
	a = _printf("Hello %c", 'R');
	printf("\na = %d \n", a);
	b = _printf("Hello %s", "Adebayo");
	printf("\nb = %d \n", b);
	c = _printf("Hello %s %c", "Adebayo", 'O');
	printf("\nc = %d \n", c);
	_printf("Hello %% \n");



	return (0);
}
