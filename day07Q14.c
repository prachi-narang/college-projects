//write a program to input a character and check whether it is a vowel or constant using if-else.
#include <stdio.h>
int main(){
char ch;
printf("enter a character: ");
scanf("%c", &ch);
if(ch=='a' ||ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U') {
printf("the character is a vowel.\n");
} else {
printf("the character is a consonant.\n");
}
return 0;
}
