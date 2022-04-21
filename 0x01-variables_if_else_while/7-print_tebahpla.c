#include <stdio.h>
/**
 * main - A function that prints alphabets in
 * reverse order.
 *
 * Return: int
 */
int main(void)
{
int i = 122;
while (i >= 97)
{
putchar(i);
i--;
}

putchar('\n');
return (0);
}
