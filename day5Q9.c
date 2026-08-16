//write a program to calculate simple and compound interest for given principal,rate and time
#include <stdio.h>
#include <math.h>
int main(){
double p,r,t,SI,CI;
printf("enter principal: ");
scanf("%lf", &p);
printf("enter rate: ");
scanf("%lf", &r);
printf("enter time: ");
scanf("%lf", &t);
SI=(p*r*t)/100;
CI=p*pow(1+r/100,t)-p;
printf("simple interest=%lf\n", SI);
printf("compound interest=%lf\n", CI);
return 0;
}
