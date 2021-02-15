                                                        //SNAKEWATERGUN BASIC C GAME
#include<stdio.h>
int snakewatergun(char you,char comp){
//return1 if u win,-1 if u lose and 0 if draw
//condition for draw
	if(you==comp){
		return 0;
}
//non-draw condition
	if(you=='s'&& comp=='w'){
		return 1;
		}
	else if(you=='w'&& comp=='s'){
		return -1;
		}
	if(you=='g'&& comp=='w'){
		return -1;
		}
	else if(you=='w'&& comp=='g'){
		return 1;
		}
	if(you=='s'&& comp=='g'){
		return -1;
		}
	else if(you=='g'&& comp=='s'){
		return 1;
		}
		}
int main()
{
	char you,comp;
	comp='s';
	printf("ENTER 's' FOR SNAKE,'w' FOR WATER AND 'g' FOR GUN\n");
	scanf("%c",&you);
	int result=snakewatergun(you,comp);
		if(result==0){
			printf("GAME DRAWN\n");
			}
		else if(result==1){
			printf("GAME WINS\n");
			}
		else{
			printf("YOU LOSE\n");
		}
	printf("you choose %c and computer choose %c",you,comp);
	return 0;
}					
		
								
