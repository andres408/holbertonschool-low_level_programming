#include<stdio.h>
/**
* main - Alphabet display in lower case
* Description : Using putchar function
* Return: Always 0 (success)
*/
int main(void)
{
char i = 'a';
for (i = 'a'; i <= 'z'; i++)
putchar (i);
putchar ('\n');
return (0);
}
