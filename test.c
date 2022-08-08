#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
	int n = _printf("Hello world");
	printf("\nn = %d \n", n);
	int a = _printf("Hello %c", 'R');
	printf("\na = %d \n", a);
	int b = _printf("Hello %s", "Adebayo");
	printf("\nb = %d \n", b);
	int c = _printf("Hello %s %c", "Adebayo", 'O');
	printf("\nc = %d \n", c);


	return (0);
}
