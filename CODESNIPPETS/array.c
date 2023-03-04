#include<stdio.h>
void main()
{
int i,a[10];
for (i=0;i<=9;i++)
{
printf("Enter Any Number: ");
scanf("%d",&a[i]);
}
for (i=0;i<=9;i++)
{
printf("Your Entered number: %d\n",a[i]);
}
printf("Value of 3rd element %d\n",a[3]);
a[3]=22;
printf("updated value of 3rd element %d\n",a[3]);
}
