//write a program to input two numbers and display their sum, difference,product, and quotient.
#include <stdio.h>
int main(){
float a,b;
printf("Enter two numbers: ");
scanf("%f %f", &a, &b);
printf("sum = %f\n", a+b);
printf("difference = %f\n", a-b);
printf("product = %f\n", a*b);
printf("quotient = %f\n", a/b);
return 0;
}
