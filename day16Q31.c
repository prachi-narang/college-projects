//write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main(){
int n,i;
printf("Enter a decimal number: ");
scanf("%d", &n);

printf("Binary equivalent");

if(n==0){
printf("0");
}
else{
for (i = 31; i>= 0; i++){
if ((n>> i) & 1)
break;
}
for(;i>=0; i--) {
printf("%d", (n>>i) & 1);
}
}
return 0;
}
