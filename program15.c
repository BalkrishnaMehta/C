#include<stdio.h>
#include"enroll.h"
void main()
{
int n,i;
enroll();
for (n=1;n<4;n++)
{
printf("---------------------\n");
printf("      Table of %d    \n",n);
printf("---------------------\n");
	for (i=1;i<11;i++)
	{
	printf("%d X %d = %d\n",n,i,i*n);
	}
}
}
