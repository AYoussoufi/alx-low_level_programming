#include<stdio.h>
/**
 * main - The main method of the program
 *
 * This function print numbers from 0 to 9
 * as Base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = '0';
 while (n < ':')
{
putchar(n);
if (n != '9')
{
putchar (',');
putchar (' ');
}
n++;
}
putchar('\n');
return (0);
}
