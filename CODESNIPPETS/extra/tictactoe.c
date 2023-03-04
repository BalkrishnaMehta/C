#include<stdio.h>
void main()
{
int z1,z2,i;
char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11;
a1=a2=a3=a4=a5=a6=a7=a8=a9=' ';
printf("---------------------------------------\n");
printf("|                                     |\n");
printf("|             TIC-TAC-TOE             |\n");
printf("|                 GAME                |\n");
printf("|                                     |\n");
printf("---------------------------------------\n");
printf("we need two players\n");
choice:
printf("PLAYER1 choose either O or X: ");
scanf("\n%c",&a10);
if (a10==79){
	a11='X';
}
else{
	a11='O';
}
if((a10==79 || a10==88) && (a11==79 || a11==88)){
	printf("PLAYER1 choosed: %c\n",a10);
	printf("PLAYER2 choosed: %c\n",a11);
}
else{
	printf("!!! WRONG INPUT\n");
	goto choice;
}
printf("\n");
for (i=1;i<15;i++){
	if (((a1==79) && (a9==79) && (a5==79) || (a1==88) && (a9==88) && (a5==88)) || ((a3==79) && (a7==79) && (a5==79) || (a3==88) && 		(a7==88) && (a5==88)) || ((a1==79) && (a2==79) && (a3==79) || (a1==88) && (a2==88) && (a3==88)) || ((a4==79) && (a5==79) && 	(a6==79) || (a4==88) && (a5==88) && (a6==88)) || ((a7==79) && (a8==79) && (a9==79) || (a7==88) && (a8==88) && (a9==88)) || 		((a1==79) && (a4==79) 	&& (a7==79) || (a1==88) && (a4==88) && (a7==88)) || ((a2==79) && (a5==79) && (a8==79) || (a2==88) && 	(a5==88) && (a8==88)) || ((a3==79) && (a6==79) && (a9==79) || (a3==88) && (a6==88) && (a9==88))){
		printf("\n\n");
		printf("------------------------\n");
		printf(" Congratulation You won \n");
		printf("------------------------\n");
		break;
	}
	else{
		position1:
		printf("PLAYER1 Enter position from 1 to 9: ");
		scanf("%d",&z1);
			if (z1<10 && z1>0){
				if (z1==1){
					if(a1==32){
						a1=a10;
					}
					else{
						printf("overwritten not allowed\n");
						goto position1;
					}
				}
				if (z1==2){
					if(a2==32){
						a2=a10;
					}
					else{
						printf("overwritten not allowed\n");
						goto position1;
					}
				}
				if (z1==3){
					if(a3==32){
						a3=a10;
					}
					else{
						printf("overwritten not allowed\n");
						goto position1;
					}	
				}
				if (z1==4){
					if(a4==32){
						a4=a10;
					}
					else{
						printf("overwritten not allowed\n");
						goto position1;
					}
				}
				if (z1==5){
					if(a5==32){
						a5=a10;
					}
					else{
						printf("overwritten not allowed\n");
						goto position1;
					}
				}
				if (z1==6){
					if(a6==32){
						a6=a10;
					}
					else{
						printf("overwritten not allowed\n");
						goto position1;
					}
				}
				if (z1==7){
					if(a7==32){
						a7=a10;
					}
					else{
						printf("overwritten not allowed\n");
						goto position1;
					}
				}
				if (z1==8){
					if(a8==32){
						a8=a10;
					}
					else{
						printf("overwritten not allowed\n");
						goto position1;
					}
				}
				if (z1==9){
					if(a9==32){
						a9=a10;
					}
					else{
						printf("overwritten not allowed\n");
						goto position1;
					}
				}
			}
		
			else{
				printf("position is not from 1 to 9\n");
				goto position1;
			}
		printf("     |     |     \n");
		printf("  %c  |  %c  |  %c  \n",a1,a2,a3);
		printf("     |     |     \n");
		printf("-----------------\n");
		printf("     |     |     \n");
		printf("  %c  |  %c  |  %c  \n",a4,a5,a6);
		printf("     |     |     \n");
		printf("-----------------\n");
		printf("     |     |     \n");
		printf("  %c  |  %c  |  %c  \n",a7,a8,a9);
		printf("     |     |     \n");
	}
	if (((a1==79) && (a9==79) && (a5==79) || (a1==88) && (a9==88) && (a5==88)) || ((a3==79) && (a7==79) && (a5==79) || (a3==88) && 		(a7==88) && (a5==88)) || ((a1==79) && (a2==79) && (a3==79) || (a1==88) && (a2==88) && (a3==88)) || ((a4==79) && (a5==79) && 	(a6==79) || (a4==88) && (a5==88) && (a6==88)) || ((a7==79) && (a8==79) && (a9==79) || (a7==88) && (a8==88) && (a9==88)) || 		((a1==79) && (a4==79) && (a7==79) || (a1==88) && (a4==88) && (a7==88)) || ((a2==79) && (a5==79) && (a8==79) || (a2==88) && 	(a5==88) && (a8==88)) || ((a3==79) && (a6==79) && (a9==79) || (a3==88) && (a6==88) && (a9==88))){
		printf("\n\n");
		printf("------------------------\n");
		printf(" Congratulation You won \n");
		printf("------------------------\n");
		break;
	}
	else{
		position2:
		printf("PLAYER2 Enter position: ");
		scanf("%d",&z2);
			if (z2<10 && z2>0){
				if (z2==1){
					if(a1==32){
						a1=a11;
					}
					else{
						printf("overwritten not allowed\n");
						goto position2;
					}
				}
				if (z2==2){
					if(a2==32){
						a2=a11;
					}
					else{
						printf("overwritten not allowed\n");
						goto position2;
					}
				}
				if (z2==3){
					if(a3==32){
						a3=a11;
					}
					else{
						printf("overwritten not allowed\n");
						goto position2;
					}
				}
				if (z2==4){
					if(a4==32){
						a4=a11;
					}
					else{
						printf("overwritten not allowed\n");
						goto position2;
					}
				}
				if (z2==5){
					if(a5==32){
						a5=a11;
					}
					else{
						printf("overwritten not allowed\n");
						goto position2;
					}
				}
				if (z2==6){
					if(a6==32){
						a6=a11;
					}
					else{
						printf("overwritten not allowed\n");
						goto position2;
					}
				}
				if (z2==7){
					if(a7==32){
						a7=a11;
					}
					else{
						printf("overwritten not allowed\n");
						goto position2;
					}
				}
				if (z2==8){
					if(a8==32){
						a8=a11;
					}
					else{
						printf("overwritten not allowed\n");
						goto position2;
					}
				}
				if (z2==9){
					if(a9==32){
						a9=a11;
					}
					else{
						printf("overwritten not allowed\n");
						goto position2;
					}
				}
			}
			else{
				printf("position is not from 1 to 9\n");
				goto position2;
			}
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",a1,a2,a3);
	printf("     |     |     \n");
	printf("-----------------\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",a4,a5,a6);
	printf("     |     |     \n");
	printf("-----------------\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",a7,a8,a9);
	printf("     |     |     \n");
}
}
printf("\n");
}
