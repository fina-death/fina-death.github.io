#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, input;
	scanf("%d", &input);
	for(i=1;i<=input;i++){
		for(j=input-i;j>0;j--) printf(" ");
		printf("*");
		for(j=1;j<i;j++) printf(" *");
		printf("\n");
	}
	return 0;
}
