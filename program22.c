#include <stdio.h>
#include"enroll.h"
void main()
{
int i,j,k,l,big,num;
enroll();
printf("Enter the number of elements of array: ");
scanf("%d", &num);
int a[num];
for (i=0;i<=num-1;i++)
{
printf("Enter Number: ");
scanf("%d",&a[i]);
}
for (j=0;j<=num-1;j++)
{
for (k=j+1;k<=num-1;k++)
{
if (a[j]>a[k]){ 
big=a[j];                  
a[j]=a[k];
a[k]=big;
}
}
}
for (l=0;l<=num-1;l++)
printf("%d ", a[l]);
printf("\n");
}

