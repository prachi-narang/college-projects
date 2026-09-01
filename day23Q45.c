//write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + ..... upto n terms.

#include <stdio.h>

int main()
{
int n, i;
int num = 2, den = 3;
float sum = 0;

printf("Enter number of terms: ");
scanf("%d", &n);

for (i = 1; i<= n; i++)
{
sum = sum + (float)num / den;
num = num + 2;
den = den + 4;
}

printf("Sum of the series = %.2f\n", sum);

return 0;
}
