#include<stdio.h>
#include"enroll.h"
void main()
{
int num1,num2;
enroll();
printf("Enter number 1: ");
scanf("%d",&num1);
printf("Enter number 2: ");
scanf("%d",&num2);
swap(num1,num2);
}
void swap(int a,int b)
{
int c;
c=b;
b=a;
a=c;
printf("Value after swapping is %d and %d\n",a,b);
}
