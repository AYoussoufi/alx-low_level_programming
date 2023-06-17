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
int x = '0';
while(x != '9')
{
int y = x + 1;
while(y != ':')
{
putchar (x);
putchar(y);
if(x != '9')
{
putchar (',');
putchar (' ');
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
