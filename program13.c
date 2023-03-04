#include<stdio.h>
#include"enroll.h"
void main()
{
int marks;
char sname[100],subname[20];
enroll();
printf("Enter student full name: ");
scanf("\n%[^\n]s",sname);
printf("Enter subject name: ");
scanf("\n%[^\n]s",subname);
printf("Enter Internal marks: ");
scanf("%d",&marks);
//printf("Enter student name followed by subject name and marks\n");
//gets(sname);
//gets(subname);
//scanf("%d",&marks);
//printf("Enter Student Full Name: %s\n",sname);
//printf("Enter Subject Name: %s\n",subname);
//printf("Enter student Internal Marks in %s: %d\n",subname,marks);
if (marks>25 && marks<=30){
	printf("Congratulations %s cleared %s with Grade A\n",sname,subname);
}
else if (marks>=21 && marks<=25){
	printf("Congratulations %s cleared %s with Grade B\n",sname,subname);
}
else if (marks>=17 && marks<=20){
	printf("Congratulations %s cleared %s with Grade C\n",sname,subname);
}
else if (marks<=16 && marks>=12){
	printf("Congratulations %s cleared %s with Grade D\n",sname,subname);
}
else {
	printf("Sorry %s has not qualified in %s\n",sname,subname);
}
}
