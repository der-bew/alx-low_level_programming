#include <stdio.h>
#include <time.h>

/**
 *main - Starting point
 *
 *Return: 0
 *
 *Descripitions: To check a number is positive or negative
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
}
else if (n < 0)
{
printf("%d is negative", n);
}
else
{
printf("%d is zero", n);
}
return (0);
}
