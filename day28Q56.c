//read and print elements of a 1-D array.

#include <stdio.h>

int main()
{
int a[100], n, i;

printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter array elements:\n");
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

printf("Array elements are:\n");
for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
return 0;
}
