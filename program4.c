#include<stdio.h>
#include"enroll.h"
void main()
{
float a,b,c;
enroll();
printf("Enter First number: ");
scanf("%f",&a);
printf("Enter Second number: ");
scanf("%f",&b);
c=a+b;
printf("The addition of %.2f and %.2f is %.2f \n",a,b,c);
}


