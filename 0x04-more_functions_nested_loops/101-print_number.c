#include "main.h"

/**
* print_number - prints # using _putchar function
* @n: the integer to print
*
* Return: void
*/
void print_number(int n)
{
	int copy, nth, size = 1, ones = n % 10;
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if (num > 9)
{
print_number(num / 10);
}
_putchar(num % 10 + '0');
}
