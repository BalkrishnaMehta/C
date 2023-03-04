#include<stdio.h>
void main()
{
int i=10,x;
x=myfun(i);
printf("%d\n",x);
}
int myfun(int x)
{
x=x+1;
return x;
}
