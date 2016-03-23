#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1061(int argc, char *argv[]) {
	int input;
	scanf("%d", &input);
	printf("%d", sum(input));
	return 0;
}

int sum(int n){
	int total=0;
	int i;
	for(i=0;i<n;i++){
		total += i+1; 
	}
	return total;		
}
