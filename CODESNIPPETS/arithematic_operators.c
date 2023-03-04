#include<stdio.h>
void main()
{
float a,b,c,d,e,f,g;
printf("Enter First Integer: ");
scanf("%f",&a);
printf("Enter Second Integer: ");
scanf("%f",&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=(int)a%(int)b;
printf("Addition: %.2f\n",c);
printf("Subtraction: %.2f\n",d);
printf("Multiplication: %.2f\n",e);
printf("Division is: %.2f\n",f);
printf("Remainder is: %.0f\n",g);
}
