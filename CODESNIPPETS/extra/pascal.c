#include<stdio.h>
int factorial(int num)
{
if (num==0)
	return 1;
return num*factorial(num-1);
}
int combination(int n,int r)
{
int x;
x = factorial(n)/((factorial(n-r))*(factorial(r)));
}
void main()
{
int i,j,k,rows;
printf("Enter number of rows : ");
scanf("%d", &rows);
for(i=0;i<rows;i++)
{
for(j=i;j<rows;j++)
{
printf(" ");
}
for(k=0;k<=i;k++)
{
printf(" %d ",combination(i,k));
}
printf("\n");
}
}
