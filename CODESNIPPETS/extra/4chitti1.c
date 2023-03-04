#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
int i,j,k,l;
int a;
char x[10],y[10],z[10],u[10];
printf("We need for player to play this game\n");
srand(time(0));
printf("Enter 1 to play game:");
scanf("%d",&a);
if(a==1){
j=rand() % 4 + 1;
if (j==1){
		x[6]="RAJA";
	}
if (j==2){
		x[6]="RANI";
	}
if (j==3){
		x[6]="CHOR";
	}
if (j==4){
		x[6]="SIPAHI";
	}
again1:
i=rand() % 4 + 1;
if (i!=j)
	{
		if (i==1){
			y[6]="RAJA";
		}
		if (i==2){
			y[6]="RANI";
		}
		if (i==3){
			y[6]="CHOR";
		}
		if (i==4){
			y[6]="SIPAHI";
		}
	}
else
	{
	goto again1;
	}
again2:
k=rand() % 4 + 1;
if (k!=i && k!=j)
	{
		if (k==1){
			z[6]="RAJA";
		}
		if (k==2){
			z[6]="RANI";
		}
		if (k==3){
			z[6]="CHOR";
		}
		if (k==4){
			z[6]="SIPAHI";
		}
	}
else
	{
	goto again2;
	}
again3:
l=rand() % 4 + 1;
if (l!=i && l!=j && l!=k)
	{
		if (l==1){
			u[6]="RAJA";
		}
		if (l==2){
			u[6]="RANI";
		}
		if (l==3){
			u[6]="CHOR";
		}
		if (l==4){
			u[6]="SIPAHI";
		}
	}
else
	{
	goto again3;
	}
}
printf("Player%d is %s\nPlayer%d is %s\nPlayer%d is %s\nPlayer%d is %s\n",i,x,j,y,k,z,l,u);			
}
