#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1033(int argc, char *argv[]) {
	int ClassScore[2][3];
	int i, j;
	float avg, sum, total=0;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d", &ClassScore[i][j]);
		}
	}
	for(i=0;i<2;i++){
		sum = 0;
		printf("class %d\n", i+1);
		for(j=0;j<3;j++){
			sum += ClassScore[i][j];
			printf(" %d: %d\n", j+1, ClassScore[i][j]);
		}
		printf(" sum: %.0f\n", sum);
		avg = sum/3.0;
		printf(" avg: %.2f\n", avg);
		total += sum;
	}
	avg = total/6.0;
	printf("total: %.0f, avg: %.2f", total, avg);
	return 0;
}
