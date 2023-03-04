#include<stdio.h>
#include"enroll.h"
void main()
{
int rows,y,z,k;
enroll();
printf("Enter number of rows of triangle: ");
scanf("%d",&rows);
for(y=1;y<=rows;y++)
{
for(z=y;z<=rows;z++)
{
printf("   ");
}
for(k=1;k<=y*2-1;k++)
{
printf(" * ");
}
printf("\n");
}
}
