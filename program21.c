#include<stdio.h>
#include"enroll.h"
void main()
{
enroll();
int i,j,large,small,num[10];
for(i=0;i<=9;i++)
{
printf("Enter Number: ");
scanf("%d",&num[i]);
large=num[0];
small=num[0];
}
for(i=0;i<=9;i++)
{
if(num[i]>large){
	large=num[i];
}
if(num[i]<small){
	small=num[i];
}
}
printf("Highest number is %d\n",large);
printf("Smallest number is %d\n",small);
}
