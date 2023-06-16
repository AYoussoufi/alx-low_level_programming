#include<stdio.h>
/**
 * main - The main method of the program
 *
 * This function print alphabet from a to z
 * without printing q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char character = 'a';
while (character != '{')
{
if (character == 'q' || character == 'e')
{
putchar(character);
}
character++;
}
putchar('\n');
return (0);
}
