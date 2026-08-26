//write a program to check if a number is an armstrong number.
#include <stdio.h>
#include <math.h>
int main()
{
int n, t, rem, digits = 0;
int sum = 0, original;

printf("Enter a number: ");
scanf("%d", &n);

original = n;
t = n;

while(t != 0)
{
digits++;
t = t/10;
}

t = n;

while (t != 0)
{rem = t % 10;
sum = sum + pow(rem,digits);
t = t/10;
}
if(sum == original)
printf("%d is a armstrong number,", original);
else
printf("%d is not an armstrong number.", original);

return 0;
}
