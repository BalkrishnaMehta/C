#include<stdio.h>
#include"enroll.h"
void main()
{
int num,i,j;
enroll();
printf("Enter number to find factorial :");
scanf("%d",&num);
j=1;
for (i=num;i!=0;i--)
{
j=j*i;
}
printf("Factorial is %d\n",j);
}
