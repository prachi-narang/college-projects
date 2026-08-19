//write a program to convert temperature from celsius to fahrenheit.
#include <stdio.h>
int main(){
double celsius,fahrenheit;
printf("enter temperature in celsius: ");
scanf("%lf", &celsius);
fahrenheit= (celsius*9/5)+32;
printf("temperature in fahrenheit:%lf\n ", fahrenheit);
return 0;
}
