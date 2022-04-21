#include <stdio.h>
/**
 * main - A function that prints all possible combinations of single-digit
 * numbers.
 *
 * Return: int
 */
int main(void)
{
int x = 48;
while (x <= 57)
{
putchar(x);
if (x != 57)
{
putchar(',');
putchar(' ');
}
x++;
}
return (0);
}
