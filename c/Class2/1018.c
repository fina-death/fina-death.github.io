#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1018(int argc, char *argv[]) {
	char keyin='y';
	int score;
	while(keyin == 'y'){
		scanf("%d", &score);
		if(score<60){
			printf("fail\n");
		}
		else{
			printf("pass\n");
		} 
		scanf(" %c", &keyin);
	}
	return 0;
}
