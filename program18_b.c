#include<stdio.h>
#include"enroll.h"
void main()
{
int num,j,k;
enroll();
printf("Enter number of rows for triangle: ");
scanf("%d",&num);
for(j=1;j<=num;j++)
{
for(k=1;k<=j;k++)
{
printf("%d",k);
}
printf("\n");
}
}
