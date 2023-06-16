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
char character = 'z';
while (character != 'Z')
{
putchar(character);
character--;
}
putchar('\n');
return (0);
}
