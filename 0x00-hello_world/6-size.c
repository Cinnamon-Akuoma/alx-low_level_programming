#include <stdio.h>

/**
* main - to print the size of various types onthe computer it is compiled to run on
*
* Return: 0
*/
int main(void)
{
printf("Size of char: %d byte(s)\n", (int) sizeof(char));
printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
return (0);
}
