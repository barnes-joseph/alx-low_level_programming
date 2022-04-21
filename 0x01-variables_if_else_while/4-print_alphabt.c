#include <stdio.h>
/**
 * main - A function that prints the alphabets
 * except q and e
 *
 * Return: int
 */
int main(void)
{
int x = 97;
while (x <= 122)
{
if ((x == 113) || (x == 101))
{
x++;
continue;
}

putchar(x);
x++;
}
putchar('\n');
return (0);
}
