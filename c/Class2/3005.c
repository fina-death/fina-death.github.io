#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main3005(int argc, char *argv[]) {
	int score;
	scanf("%d", &score);
	if(score >59){
		printf("pass");
	}
	else{
		printf("fail");
	}
	return 0;
}
