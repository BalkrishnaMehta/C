#include<stdio.h>
#include"enroll.h"
void main()
{
int dd,mm,yyyy;
char day[10];
enroll();
printf("Input the day, followed by date (dd-mm-yyyy): ");
scanf("%s %d-%d-%d",day,&dd,&mm,&yyyy);
printf("Day:%s\nDate:%d\nMonth:%d\nYear:%d\n",day,dd,mm,yyyy);
}
