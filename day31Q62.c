//reverse an array without taking extra space.

#include <stdio.h>

int main()
{
int a[100], n, i, temp;

printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter array elements: ");
for (i = 0; i< n; i++)
{
scanf("%d", &a[i]);
}

for (i = 0; i < n/2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 -i] = temp;
}

printf("reversed array: ");
for (i = 0; i< n; i++)
{
printf("%D", a[i]);
}
return 0;
}
