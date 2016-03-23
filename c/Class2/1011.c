#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1011(int argc, char *argv[]) {
	int score;
	int group;
	scanf("%d%d", &group, &score);
	if(group==1 && score>59){
		printf("pass");
	} 
	else{
		if(group==2 && score>69){
			printf("pass");
		}
		else{
			printf("fail");
		}
	}
	return 0;
}
