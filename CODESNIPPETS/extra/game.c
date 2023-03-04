#include<stdio.h>
#include"tictactoe.h"
#include"dice.h"
#include"cricket.h"
#include"clear.h"
void main()
{
int i;
game:
clear();
printf("Enter integers.\n1 to play tictactoe.\n2 to play dice roller.\n3 to play book cricket.\n4 to exit: ");
scanf("%d",&i);
if(i==1){
	tictactoe();
	sleep(5);
	goto game;
}
else if(i==2){
	dice();
	sleep(5);
	goto game;
}
else if(i==3){
	cricket();
	sleep(5);
	goto game;
}
else {
	printf("SEE YOU SOON!!!\n");
}
}
