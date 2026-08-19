//write a program to input an integer and check whether it is even or odd using if-else.
#include <stdio.h>
int main(){
int num;
printf("enter an integer: ");
scanf("%d", &num);
if (num%2==0){
printf("the number is even. \n");
} else {
printf("the number is odd.\n");
}
return 0;
}
