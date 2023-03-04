#include<stdio.h>
#include"enroll.h"
void main()
{
int i;
enroll();
printf("Enter any value:");
scanf("%d",&i);
if(i%3==0)
{
printf("Number is divisible by 3\n");
}
}
