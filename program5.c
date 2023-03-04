#include <stdio.h>
#include"enroll.h"
void main()
{
float F,C;
enroll();
printf("Enter Temperature in Farenheit: ");
scanf("%f",&F);
C=((F-32)*5)/9;
printf("Your converted temperature in celcius is %.2f \n", C);
}
