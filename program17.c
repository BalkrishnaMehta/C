#include<stdio.h>
#include"enroll.h"
void main()
{
int i,j,k,l;
enroll();
for(i=1;i<101;i++)
{
for(j=2;j<i;j++)
{
l=0;
k=i%j;
if(k==0)
{
l=1;
break;
}
}
if(l==0)
{
printf("%d is a prime number.\n",i);
}
}
}
