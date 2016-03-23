#include <stdio.h>
#include <stdlib.h>

void printAry(int n, int *P){
	int i;
	for(i=0;i<n;i++){
		printf("%d", *(P+i));
	}
}
double Avg(int n, int *P){
	double total = 0;
	int i;
	for(i=0;i<n;i++){
		total += *(P+i);
	}
	return total/n;
}
int MaxScore(int n, int *P){
	int max_score, num;
	max_score = 0;
	num = 0;
	int i;
	for(i=0;i<n;i++){
		if(max_score < P[i]){
			max_score = P[i];
			num = i;
		}
	}
	return num;
}
