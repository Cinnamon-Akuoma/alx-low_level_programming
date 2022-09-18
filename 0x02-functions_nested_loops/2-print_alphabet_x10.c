#include "main.h"
/**
*print_alphabet - prints lower case alphabet
*
*Return: Always 0(Success)
**/
void print_alphabet(void)
{
char c, i;
for (c = 'a'; c <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}

/**
*print_alphabet_x10 - prints alphabets 10 times
*
**/
void print_alphabet_x10(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
print_alphabet();
}
return (0);
}
