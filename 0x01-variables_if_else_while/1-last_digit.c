#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - The main method of the program
 *
 * This function print a message based of the random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit = n%10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
return (0);
}
