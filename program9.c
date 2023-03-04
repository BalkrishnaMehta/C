#include<stdio.h>
#include"enroll.h"
void main()
{
int date,month,year;
char day[10];
enroll();
printf("Input the day, followed by date (dd-mm-yyyy): ");
scanf("%s %d-%d-%d",day,&date,&month,&year);
printf("Day:%s\n",day);
printf("Date:%d\n",date);
if (month==1){
printf("Month:January\n");
}else if (month ==2){
printf("Month:Febrary\n");
}else if (month ==3){
printf("Month:March\n");
}else if (month ==4){
printf("Month:April\n");
}else if (month ==5){
printf("Month:May\n");
}else if (month ==6){
printf("Month:June\n");
}else if (month ==7){
printf("Month:July\n");
}else if (month ==8){
printf("Month:August\n");
}else if (month ==9){
printf("Month:September\n");
}else if (month ==10){
printf("Month:October\n");
}else if (month ==11){
printf("Month:November\n");
}else if (month ==12){
printf("Month:December\n");
}
else {
printf("Month:Not a Valid month\n");
}
printf("Year:%d\n", year);
}
