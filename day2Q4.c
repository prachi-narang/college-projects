//write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
int radius,area,circumference;
double  pi=3.14;
printf("enter radius:");
scanf("%d",&radius);
area=pi*radius*radius;
circumference=2*pi*radius;
printf("area is %d\n", area);
printf("circumference is %d", circumference);
return 0;
}
