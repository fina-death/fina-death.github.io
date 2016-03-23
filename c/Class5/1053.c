#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1053(int argc, char *argv[]) {
	int **ptr1;
	int i, j;
	
	ptr1 = (int**)malloc(sizeof(int*)*(3));
	for(i=0;i<3;i++){
		*(ptr1+i) = (int*)malloc(sizeof(int)*(i+1));
	}
	for(i=0;i<3;i++){
		for(j=0;j<=i;j++){
			scanf("%d", *(ptr1+i)+j);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<=i;j++){
			printf("%d ", *(*(ptr1+i)+j));
		}
		printf("\n");
	}
	return 0;
}
