#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1032(int argc, char *argv[]) {
	int num[5], temp;
	int i, j;
	for(i=0;i<5;i++){
		scanf("%d", &num[i]);
	}
	for(j=5;j>0+1;j--){
		for(i=0;i<j-1;i++){
			if(num[i+1]<num[i]){
				temp = num[i+1];
				num[i+1] = num[i];
				num[i] = temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d ", num[i]);
	}
	return 0;
}
