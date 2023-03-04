#include<stdio.h>
#include"enroll.h"
void main()
{
int num1,num2,num3,num4;
enroll();
printf("Enter First Integer: ");
scanf("%d",&num1);
printf("Enter Second Integer: ");
scanf("%d",&num2);
printf("Enter Third Integer: ");
scanf("%d",&num3);
num4=num3;
if(num2>num4){
num4=num2;
}
if(num1>num4){
num4=num1;
}
printf("Larger Number is :%d\n",num4);
}















