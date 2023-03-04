#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
int i,j,k,l;
int a;
char x[6],y[6],z[6],u[6];
printf("We need for player to play this game\n");
srand(time(0));
printf("Enter 1 to play game:");
scanf("%d",&a);
if(a==1){
j=rand() % 4 + 1;
if (j==1){
		x[0]='R';
		x[1]='A';
		x[2]='J';
		x[3]='A';
	}
if (j==2){
		x[0]='R';
		x[1]='A';
		x[2]='N';
		x[3]='I';
	}
if (j==3){
		x[0]='C';
		x[1]='H';
		x[2]='O';
		x[3]='R';
	}
if (j==4){
		x[0]='S';
		x[1]='I';
		x[2]='P';
		x[3]='A';
		x[4]='H';
		x[5]='I';
	}
again1:
i=rand() % 4 + 1;
if (i!=j)
	{
		if (i==1){
			y[0]='R';
			y[1]='A';
			y[2]='J';
			y[3]='A';
		}
		if (i==2){
			y[0]='R';
			y[1]='A';
			y[2]='N';
			y[3]='I';
		}
		if (i==3){
			y[0]='C';
			y[1]='H';
			y[2]='O';
			y[3]='R';
		}
		if (i==4){
			y[0]='S';
			y[1]='I';
			y[2]='P';
			y[3]='A';
			y[4]='H';
			y[5]='I';
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
			z[0]='R';
			z[1]='A';
			z[2]='J';
			z[3]='A';
		}
		if (k==2){
			z[0]='R';
			z[1]='A';
			z[2]='N';
			z[3]='I';
		}
		if (k==3){
			z[0]='C';
			z[1]='H';
			z[2]='O';
			z[3]='R';
		}
		if (k==4){
			z[0]='S';
			z[1]='I';
			z[2]='P';
			z[3]='A';
			z[4]='H';
			z[5]='I';
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
			u[0]='R';
			u[1]='A';
			u[2]='J';
			u[3]='A';
		}
		if (l==2){
			u[0]='R';
			u[1]='A';
			u[2]='N';
			u[3]='I';
		}
		if (l==3){
			u[0]='C';
			u[1]='H';
			u[2]='O';
			u[3]='R';
		}
		if (l==4){
			u[0]='S';
			u[1]='I';
			u[2]='P';
			u[3]='A';
			u[4]='H';
			u[5]='I';
		}
	}
else
	{
	goto again3;
	}
}
printf("Player%d is %s\nPlayer%d is %s\nPlayer%d is %s\nPlayer%d is %s\n",i,x,j,y,k,z,l,u);			
}
