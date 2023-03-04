#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int no,x,y,z;
printf("---------------------------------------\n");
printf("|                                     |\n");
printf("|             ROLLING DICE            |\n");
printf("|                 GAME                |\n");
printf("|                                     |\n");
printf("---------------------------------------\n");
x=1;
while (x == 1){
srand(time(0));
no = rand() % 6 + 1;
if (no == 1){
printf("---------\n");
printf("|-------|\n");
printf("|---0---|\n");
printf("|-------|\n");
printf("---------\n");
}
if (no == 2){
printf("---------\n");
printf("|---0---|\n");
printf("|-------|\n");
printf("|---0---|\n");
printf("---------\n");
}
if (no == 3){
printf("---------\n");
printf("|-------|\n");
printf("|-0-0-0-|\n");
printf("|-------|\n");
printf("---------\n");
}
if (no == 4){
printf("---------\n");
printf("|-0---0-|\n");
printf("|-------|\n");
printf("|-0---0-|\n");
printf("---------\n");
}
if (no == 5){
printf("---------\n");
printf("|-0---0-|\n");
printf("|---0---|\n");
printf("|-0---0-|\n");
printf("---------\n");
}
if (no == 6){
printf("---------\n");
printf("|-0-0-0-|\n");
printf("|-------|\n");
printf("|-0-0-0-|\n");
printf("---------\n");
}
printf("press 1 to roll again and n to exit:");
scanf("%d",&x);
printf("\n");
} 
}
