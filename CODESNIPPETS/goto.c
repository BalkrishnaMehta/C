#include<stdio.h>
void main()
{
int a,b;
revalue:
printf("Enter any Value: ");
scanf("%d",&a);
if (a<10){
printf("a is less than 10\n");
}
else {
printf("a is greater than 10\n");
goto revalue;
}
}
