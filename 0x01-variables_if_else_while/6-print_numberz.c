#include<stdio.h>
/**
 * main - The main method of the program
 *
 * This function print numbers from 0 to 9
 * with characters only
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
while (n != ':')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
