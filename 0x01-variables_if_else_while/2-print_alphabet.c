#include <stdio.h>
/**
 * main - A function that prints all the letters of the alphabet
 *
 * Return: int
 */
int main(void)
{
char *alphabets = "abcdefghijklmnopqrstuvwxyz";
int n = 0;
while (alphabets[n])
{
putchar(alphabets[n]);
n++;
}
putchar('\n');
return (0);
}
