#include<stdio.h>
#include"enroll.h"
void main()
{
char name[200],num[30],coln[200],corn[200];
enroll();
printf("Enter Student Full Name :");
scanf("\n%[^\n]s",name);
printf("Enter Student Enrollment No :");
scanf("\n%[^\n]s",num);
printf("Enter College Name :");
scanf("\n%[^\n]s",coln);
printf("Enter Course Name :");
scanf("\n%[^\n]s",corn);
printf("\n\n--------------------------------------------\n");
printf("               STUDENT DETAILS              \n");
printf("--------------------------------------------\n");
printf("%s\n",name);
printf("%s\n",num);
printf("%s\n",coln);
printf("%s\n",corn);
}
