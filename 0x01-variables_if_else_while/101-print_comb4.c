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
for (int x = '0';x != '8';x++){
for (int y = x + 1;y != '9';y++){
for (int z = y + 1;z != ':';z++){
putchar(x);
putchar(y);
putchar(z);
if (x != '7'){
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
