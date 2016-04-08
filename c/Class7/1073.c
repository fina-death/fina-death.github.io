#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main1073(int argc, char *argv[]) {
	FILE *RF, *WF;
	int n=0;
	float num;
	
	WF = fopen("temp.txt", "w");
	do{
		n++;
		scanf("%f", &num);
		fprintf(WF, "%f ", num);
	}while(num != -1 || n == 100);
	fclose(WF);
	
	n=0;
	RF = fopen("temp.txt", "r");
	fscanf(RF, "%f", &num);
	while(num != -1 || n == 100){
		printf("%.1f ", num);
		fscanf(RF, "%f", &num);
		n++;
	};
	fclose(RF);
	return 0;
}
