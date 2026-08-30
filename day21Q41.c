//write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main()
{
int num, first, last, digits, middle, swapped, power;

printf("Enter a number: ");
scanf("%d", &num);

last = num % 10;

digits = (int)log10(num);

power = (int)pow(10, digits);

first = num / power;

middle = (num % power) / 10;

swapped = last * power + middle * 10 + first;

printf("Number after swapping first and last digit = %d\n", swapped);

return 0;
}
