//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main(){
double  length,breadth,area,perimeter;
printf("enter length: ");
scanf("%lf",&length);
printf("enter breadth: ");
scanf("%lf",&breadth);
area=length*breadth;
perimeter=2*(length+breadth);
printf("Area=%f\n", area);
printf("Perimeter=%fx\n", perimeter);
return 0;
}
