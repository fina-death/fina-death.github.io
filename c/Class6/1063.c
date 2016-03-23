#include <stdio.h>
#include <stdlib.h>
#include "score.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1063(int argc, char *argv[]) {
	int input;
	int *score;
	int i;
	int maxnum;
	scanf("%d", &input);
	score = (int*)malloc(sizeof(int)*input);
	for(i=0;i<input;i++){
		scanf("%d", score+i);
	}
	maxnum = MaxScore(input, score);
	printf("avg = %.2lf\n", Avg(input, score));
	printf("highest:\n");
	printf("%d: %d", maxnum+1, *(score+maxnum));
	free(score);
	return 0;
}
