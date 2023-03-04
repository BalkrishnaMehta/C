#include<stdio.h>
#include<string.h>
void main()
{
char a[6],b[6];
char c[6]="True";
char d[6]="False";
int e,f,g,h;
printf("---------------------\n");
printf("     TRUTH TABLE     \n");
printf("---------------------\n");
printf("Enter True or False  \n");
printf("Enter first truth value:");
scanf("%s",a);
printf("Enter second truth value:");
scanf("%s",b);
printf("Your Value:%s\nYour Value:%s\n",a,b);
e=strcmp(a,c);
f=strcmp(b,c);
g=strcmp(a,d);
h=strcmp(b,d);
if(e==0 && f==0){
	printf("Truth Value of a(%s) and b(%s) is:True\n",a,b);
}else if(e!=0 && f==0){
	printf("Truth Value of a(%s) and b(%s) is:False\n",a,b);
}else if(e==0 && f!=0){
	printf("Truth Value of a(%s) and b(%s) is:False\n",a,b);
}else if(e!=0 && f!=0){
	printf("Truth Value of a(%s) and b(%s) is:False\n",a,b);
}
if(e==0 || f==0){
	printf("Truth Value of a(%s) or b(%s) is:True\n",a,b);
}else if(e==0 || f==0){
	printf("Truth Value of a(%s) or b(%s) is:True\n",a,b);
}else if(e==0 || f==0){
	printf("Truth Value of a(%s) or b(%s) is:True\n",a,b);
}else{
	printf("Truth Value of a(%s) or b(%s) is:False\n",a,b);
}
if (g==0)
	if (!g)
		printf("Negation of your Truth value True\n");
if (e==0)
	if(!e)
        	printf("Negation of your Truth Value False\n");
if (h==0)
	if (!h)
		printf("Negation of your Truth value True\n");
if (f==0)
	if(!f)
        	printf("Negation of your Truth Value False\n");
}
