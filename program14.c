#include<stdio.h>
#include"enroll.h"
void main()
{
int num1,num2;
char operator;
enroll();
printf("Enter Equation in the form of a^b: ");
scanf(" %d%c%d",&num1,&operator,&num2);
switch (operator){
	case '+':
	printf("addition is %d\n",num1+num2);
	break;
	case '-':
	printf("subtraction is %d\n",num1-num2);
	break;
	case '*':
	printf("Multiplication is %d\n",num1*num2);
	break;
	case '/':
	printf("Division is %d\n",num1/num2);
	break;
	default :
	printf("Invalid operatations");
}
}
