//write a program to print all factors of a given number.
#include <stdio.h>

int main()
{
int n,i,first=1;

printf("Enter a number: ");
scanf("%d", &n);

printf("Factors of %d are:", n);

for (i=2; i<=n; i++)
{
if(n%i == 0){
if(!first)
printf(",");
printf("%d", i);
first = 0;
}
}

return 0;
}
