#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - A function that prints the last digit of an integer
 *
 * Return: int
 */
/* betty style doc for function main goes there */
int main(void)
{
int n, last_digit, x;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0)
{
x = -n;
last_digit = -(x % 10);
}
else
last_digit = n % 10;

if (last_digit > 5)
printf("Last digit of %d is %d and is greater than 5", n, last_digit);
else if (last_digit == 0)
printf("Last digit of %d is %d and is 0", n, last_digit);
else if (last_digit < 6)
printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
else
printf("Last digit of %d is %d", n, last_digit);

printf("\n");
return (0);

}
