#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1052(int argc, char *argv[]) {
	int *ptr;
	int i, num;
	int max, maxi;
	float total=0;	
	scanf("%d", &num);
	ptr = (int *)malloc(sizeof(int)*num);
	for(i=0;i<num;i++){
		scanf("%d", ptr+i);
		total += *(ptr+i);
	}
	printf("avg = %.2f\n", total/num);
	printf("fail:\n");
	for(i=0;i<num;i++){
		if(*(ptr+i) < 60) printf("%d: %d\n", i+1, *(ptr+i));
	}
	printf("highest:\n");
	max = *ptr;
	maxi = 1;
	for(i=1;i<num;i++){
		if(max < *(ptr+i)){
			max = *(ptr+i);
			maxi = i+1;
		}
	}
	printf("%d: %d", maxi, max);
	free(ptr);
	return 0;
}
