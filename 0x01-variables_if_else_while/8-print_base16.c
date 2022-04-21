#include <stdio.h>
/**
 * main - A function that all the digits in
 * base 16 number system
 *
 * Return: int
 */
int main(void)
{
char *base16 = "0123456789abcdef";
int x = 0;
while (x < 16)
{
putchar(base16[x]);
x++;
}
putchar('\n');
return (0);
}
