#include<stdio.h>
int fun(int *x)
{
*x=*x+5;
return *x;
}
void main()
{
int a=5,*b=&a;
printf("Value:%d\n",fun(&a));
printf("Reference:%x\n",&a);
printf("Value:%d\n",*b);
printf("Reference:%x\n",b);//reference of A.
printf("Reference:%x\n",&b);//reference of B.
printf("%d\n",sizeof(b));
}
