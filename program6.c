#include <stdio.h>
#include"enroll.h"
{
float R,A,L,W,AREA,r,area;
{
enroll();
printf("--------------------------------\n");
printf("         Area of Circle         \n");
printf("--------------------------------\n");
printf("Enter radius of circle: ");
scanf("%f",&R);
A=((R*R)*22)/7;
printf("The Area of Circle is %.3f: \n",A);
printf("--------------------------------\n");
printf("        Area of Rectangle       \n");
printf("--------------------------------\n");
printf("Enter Length of reactangle: ");
scanf("%f",&L);
printf("Enter Width of reactangle: ");
scanf("%f",&W);
AREA=L*W;
printf("The Area of Rectangle is %.3f: \n",AREA);
printf("--------------------------------\n");
printf("         Area of Sphere          \n");
printf("--------------------------------\n");
printf("Enter radius of Sphere : ");
scanf("%f",&r);
area=((((r*r)*4)*22)/7);
printf("The Area of Sphere is %.3f: \n",area);
}
