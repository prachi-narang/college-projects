//write a program to find the roots of a quadratic equations and categorize them.
#include <stdio.h>
#include <math.h>
int main(){
float a,b,c,discriminant,root1,root2,imgpart,realpart;
printf("enter coeffecients of a,b, and c: ");
scanf("%f %f %f",&a,&b, &c);
if(a==0){
printf("not a quadratic equation.\n");
return 0;
}
discriminant = b*b-4*a*c;
if(discriminant>0){
root1 = (-b + sqrt(discriminant))/(2*a);
root2 = (-b - sqrt(discriminant))/(2*a);
printf("roots are real and distinct.\n");
printf("root1 = %f\n", root1);
printf("root2 = %f\n", root2);
}
else if (discriminant == 0){
root1 = -b/(2*a);
printf("roots are real and equal.\n");
printf("root = %f\n", root1);
}
else{
realpart = -b/(2*a);
imgpart = sqrt(-discriminant)/(2*a);
printf("roots are complex and imaginary");
printf("root1 = %f + %fi\n",realpart, imgpart);
printf("root2 = %f - %fi\n",realpart, imgpart);
}
return 0;
}
