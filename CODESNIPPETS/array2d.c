#include<stdio.h>
void main()
{
int i,j,k,a[3][3];
for (i=0;i<=2;i++)
{
for (j=0;j<=2;j++)
{
printf("Enter number for element a%d%d: ",i,j);
scanf("%d",&a[i][j]);
}
}
for (i=0;i<=2;i++)
{
for (k=0;k<=2;k++)
{
printf(" %d ",a[i][k]);
}
printf("\n");
}
}
