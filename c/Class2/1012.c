#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main12(int argc, char *argv[]) {
	int score;
	int group;
	scanf("%d", &group);
	if(group<0||group>2){
		printf("roll error");
	}
	else{
		scanf("%d", &score);
		if(score>100||score<0){
			printf("score error");
		}
		else if(score>59&&group==1){
			printf("pass");
		} 
		else if(score>69&&group==2){
			printf("pass");
		}
		else{
			printf("fail");	
		}
	}
	return 0;
}

