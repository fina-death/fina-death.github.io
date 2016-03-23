#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1014(int argc, char *argv[]) {
	int i, num, total=0;
	scanf("%d", &num);
	for(i=1; i<=num; i++){
		total = total + i;
		if(i!=1)printf("+");
		printf("%d", i);
	}
	printf(" = %d", total);
	return 0;
}
