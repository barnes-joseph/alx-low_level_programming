#include "main.h"
#include <stdio.h>
/**
 * print_number - A function that prints
 * an integer using _putchar
 *
 *@n: int type number
 */
void print_number(int n)
{
if (n / 10 != 0)
print_number(n / 10);
_putchar((n % 10) + '0');
}

int main(void)
{
    print_number(345);
    return (0);
}