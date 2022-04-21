#include <stdio.h>
/**
 * main - A function that prints both lower case
 * and uppercase alphabets
 *
 * Return: int
 */
int main(void)
{
int i = 97;
int x = 65;
while (i<= 122)
{
putchar(i);
i++;
}
while (x <= 90)
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
