//write a program to classify a triangle as equilateral, isosceles, or scalene based on its side lengths.
#include <stdio.h>
int main(){
int a,b,c;
printf("enter the three sides of the triangle: ");
scanf("%d %d %d", &a, &b, &c);

if(a==b && b==c)
printf("Equilateral Triangle");
else if (a==b || b== c||a==c)
printf("Isosceles Triangle");
else 
printf("Scalene Triangle");

return 0;
}

