#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void cricket()
{
int j,z,x;
printf("---------------------------------------\n");
printf("|                                     |\n");
printf("|             BOOK CRICKET            |\n");
printf("|                 GAME                |\n");
printf("|                                     |\n");
printf("---------------------------------------\n");
srand(time(0));
z=0;
while (j!=0)
	{
		printf("Press 1 to move pages and 0 to exit:");
		scanf("%d",&x);
		if(x==1)
			{
			j=rand()%7;
			z=z+j;
			printf("You score %d runs\n",j);
			}
		else
			{
			printf("!!!YOU QUIT\n");
			break;
			}
	}
printf("Total score %d\n",z);
printf("\n");
}
