//Write a program to print the following pattern:
//
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

#include <stdio.h>

int main()
{
int i, j, n;

for(i = 1; i <= 7; i++)
{
n = (i <= 4) ? 2*i-1 : 15-2*i;

for(j = 1; j <= (7-n)/2; j++)
printf(" ");

for(j = 1; j <= n; j++)
printf("*");

printf("\n");
}

return 0;
}
