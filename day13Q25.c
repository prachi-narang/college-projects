//write a program to implement a basic calculator using switch case for +,-,*,/,%
#include <stdio.h>
int main(){
char op;
float a,b;

printf("enter two numbers: ");
scanf("%f %f", &a,&b);

printf("enter operator: ");
scanf("%c", &op);

switch(op)
{
case '+':
printf("Result = %.2f", a+b);
break;

case '-':
printf("Result = %.2f", a-b);
break;

case '*':
printf("Result = %.2f", a*b);
break;

case '/':
if(b!=0)
printf("Result = %.2f", a/b);
else
printf("Division by zero is not allowed");
break;

case '%':
printf("%d", (int)a % (int)b);
break;

default:
printf("invalid operator. ");
}
return 0;
}
