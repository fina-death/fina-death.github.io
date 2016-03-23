#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int **ptr1;
	int i, j;
	int x, y;
	float sum, total=0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	ptr1 = (int**)malloc(sizeof(int*)*(x));
	for(i=0;i<x;i++){
		*(ptr1+i) = (int*)malloc(sizeof(int)*(y));
	}
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d", *(ptr1+i)+j);
		}
	}
	for(i=0;i<x;i++){
		sum = 0;
		printf("class %d\n", i+1);
		for(j=0;j<y;j++){
			printf(" %d: %d\n", j+1, *(*(ptr1+i)+j));
			sum += *(*(ptr1+i)+j);
		}
		total += sum;
		printf(" sum: %.0f\n", sum);
		printf(" avg: %.2f\n", sum/y);
	}
	printf("total: %.0f, avg: %.2f\n", total, total/(y*x));
	return 0;
}
