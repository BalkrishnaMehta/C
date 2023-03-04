#include<stdio.h>
#include"enroll.h"
void main()
{
enroll();
int age,success;
long seconds;
printf("Enter your age: ");
success=scanf("%d",&age);
seconds=(((age*365)*24)*3600);
if (success==1)
{
printf("you have lived for %ld seconds\n",seconds);
}
else
{
printf("You have entered wrong age\n");
}
}
