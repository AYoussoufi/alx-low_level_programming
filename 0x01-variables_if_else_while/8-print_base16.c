#include<stdio.h>
/**
 * main - The main method of the program
 *
 * This function print message
 * as Base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char character = 'a';
char n = '0';
while (n != ':')
{
putchar(n);
n++;
}
while (character != 'g')
{
putchar(character);
character++;
}
putchar('\n');
return (0);
}
