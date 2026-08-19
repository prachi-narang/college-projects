//write a program to swap two numbers using a third variable.
#include <stdio.h>
int main(){
int a,b,c;
printf("enter a value: ");
scanf("%d",&a);
printf("enter b value: ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("new value of a is %d", a);
printf("new value of b is %d", b);
return 0;
}
