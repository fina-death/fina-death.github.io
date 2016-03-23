#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main3050(int argc, char *argv[]) {
	int num;
	int i, j;
	int x=0;
	scanf("%d", &num);
	for(i=1;i<=num;i++){
		for(j=0;j<i;j++){
			x = x + 1;
			printf("%d ", x);
		}
		printf("\n");
	}
	return 0;
}
