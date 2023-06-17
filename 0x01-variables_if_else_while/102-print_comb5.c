#include<stdio.h>
#include <stdbool.h>
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
bool condition = true;
int a = '0';
int b = '0';
int c = '0';
int d = '1';
while(condition)
{
if(a == '9' && b == '8')
{
break;
}
if (d==':')
{
d='0';
c++;
if (c==':')
{
c=a;
b++;
d = b + 1;
if (d==';')
{
d='0';
}
if(b=='9')
{
d='0';
}
if(b==':')
{
b='0';
a++;
}
}
}
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
putchar('\n');
d++;
};
}
