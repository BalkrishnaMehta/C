#include<stdio.h>
void main()
{
int i;
char str[5]="HELLO";
int num[5]={1,2,3,4,5};
printf("-------------------------------------\n");
printf("       CHAR      |      INTEGER      \n");
printf("-------------------------------------\n");
for(i=0;i<=4;i++)
{
printf(" %c--> ",str[i]);
printf(" %x  ",&str[i]);
printf("|  %d--> ",num[i]);
printf(" %x ",&num[i]);
printf("\n");
}
}
