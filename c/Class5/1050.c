#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1050(int argc, char *argv[]) {
	int A[5];
	int i, max=0, maxnum;
	int *p;
	
	for(i=0;i<5;i++) scanf("%d", A+i);
	p = A;
	for(i=0;i<5;i++){
		if(max < *(p+i)){
			max = *(p+i);
			maxnum = i;
		} 
	}
	printf("%d: %d", maxnum+1, *(p+maxnum));
	return 0;
}
