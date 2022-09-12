#include <stdlib.h>
#include <time.h>
#include <stdio.h

/**
*main - Prints the results to be <6, >5 or equal to 0.
*
*Return- Always 0
*/

int main(void)
{
int n, lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

if (lastd > 5)
{
printf("Last digit of % d in % d and is greater than 5\n", n, lastd);
}
Else if (lastd == 0)
{
printf("Last digit of % d and is 0\n”, n, lastd);
}
Else if (lastd < 6 && lastd != 0)
{
printf("Last digit of % d and is less than 6 and not 0\n”, n, lastd);
}
return (0);
}
