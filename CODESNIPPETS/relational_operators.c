#include <stdio.h>
int main()
{
float a,b,c,d,e;
printf("Enter First Integer: ");
scanf("%f",&a);
printf("Enter Second Interger: ");
scanf("%f",&b);
if (a<b){
    printf("A is less than B\n");
}
if (a>b){
    printf("A is greater than B\n");
}
if (a<=b){
    printf("A is less than or equal to B\n");
}
if (a>=b){
    printf("A is greater than or equal to B\n");
}
if (a==b){
    printf("A is equal to B\n");
}
if (a!=b){
    printf("A is not equal to B\n");
}
}
