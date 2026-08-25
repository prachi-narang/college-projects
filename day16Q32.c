//write a program to check if a number is a palindrome.
#include<stdio.h>
int main(){
int n, original;
int remainder, reverse = 0;
printf("Enter a number: ");
scanf("%d", &n);

original = n;

while (n != 0){
remainder = n%10;
reverse = reverse * 10 + remainder;
n = n/10;
}

if (original == reverse)
printf("%d is a palindrome number.", original);
else 
printf("%d is not a palindrome number.", original);

return 0;
}
