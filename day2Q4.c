//write a program to calculate the area of circumference of a circle given its radius.
#include <stdio.h>
int main(){
int radius,area,circumference;
printf("enter radius: ");
scanf("%d", &radius);
double pi=3.14;
area=pi*radius*radius;
circumference=2*pi*radius;
printf("area is %d\n", area);
printf("circumference is %d\n", circumference);
return 0;
}
