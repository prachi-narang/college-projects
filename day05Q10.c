//write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main(){
int totalseconds,hours,minutes,seconds;
printf("enter time in seconds: ");
scanf("%d", &totalseconds);
hours= totalseconds/3600;
minutes= (totalseconds%3600)/60;
seconds= totalseconds%60;
printf("time=%d:%d:%d\n", hours, minutes, seconds);
return 0;
}
