#include<stdio.h>
#include"enroll.h"
int fact(int n)
{
if (n==0)
	return 1;
return n*fact(n-1);
}
void main()
{
int num;
enroll();
printf("Enter Number to find its factorial: ");
scanf("%d",&num);
printf("The factorial of %d is %d\n",num,fact(num));
}
