#include<stdio.h>
void main()
{
int j;
do
{
printf("Enter any number: ");
scanf("%d",&j);
}while(j!=0);
printf("loop ended and last value is %d\n",j);
}
