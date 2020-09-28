#include<stdio.h>
/**
 * main - Print numbers 00..99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int h;
for (i = 48; i <= 57; i++)
{
for (h = 48; h <= 57; h++)
{
putchar (i);
putchar (h);
if (i == 57 && h == 57)
continue;
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
