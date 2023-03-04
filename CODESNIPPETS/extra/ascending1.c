#include<stdio.h>
void main()
{
int i,j,k,l,m,n,o,num;
printf("Number of Elements in array : ");
scanf("%d",&num);
int a[num],b[num];
for (i=0;i<=num-1;i++)
{
printf("Enter Number: ");
scanf("%d",&a[i]);
}
for (i=0;i<=num-1;i++)
{
k=0;
m=0;
for (j=0;j<=num-1;j++)//for comparing elements
{
if(a[i]>a[j]){
k=k+1;
}
}
for(n=0;n<=num;n++)//for repetition of elements
{
if(a[i]==a[n] && i!=n){
m=m+1;
}
b[k+m]=a[i];
}
b[k]=a[i];
}
for (l=0;l<=num-1;l++)
{
printf("%d\n",b[l]);
}
}
