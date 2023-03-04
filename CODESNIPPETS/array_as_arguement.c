#include<stdio.h>
void display(int x[5])
{
int a;
for (a=0;a<=4;a++)
{
printf("%d| ",x[a]);
}
printf("\n");
x[4]=128;
}
void main()
{
int y[5]={1,2,3,4,5};
display(y);
printf("\n--------\nDisplay function terminated.\n");
printf("now the value of y[4] is %d\n",y[4]);
}
