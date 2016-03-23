#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1031(int argc, char *argv[]) {
	int score[3];
	float avg;
	int max;
	int i, num;
	scanf("%d%d%d", &score[0], &score[1], &score[2]);
//avg
	avg = 0;
	for(i=0;i<3;i++){
		avg += score[i];
	}
	printf("avg = %.2f\n", (avg/3));
//fail	
	printf("fail:\n");
	for(i=0;i<3;i++){
		if(score[i]<60)	printf("%d: %d\n", i+1 ,score[i]);
	}
//highest
	printf("highest:\n");
	for(i=0;i<3;i++){
		if(score[i]>max){
			max=score[i];
			num = i+1;
		}
	}
	printf("%d: %d", num, max);
	return 0;
}
