//write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digits, or special character
#include <stdio.h>
int main(){
char ch;
printf("enter a character: ");
scanf("%s",&ch);
if (ch>='A' && ch<='Z')
printf("Uppercase character");
else if (ch>='a' && ch<='z')
printf("Lowercase character");
else if (ch>='0' && ch<='9')
printf("Digits");
else
printf("Special characters");
return 0;
}
