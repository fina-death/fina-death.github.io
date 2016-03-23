#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Student[5][3]={{76, 73, 85}, {88, 84, 76}, {92, 82, 92}, {82, 91, 85}, {72, 74, 73}}, hstudent;
	int i, j;
	float avg, havg=0, sum, total=0;
	for(i=0;i<5;i++){
		sum = 0;
		printf("student %d\n", i+1);
		for(j=0;j<3;j++){
			sum += Student[i][j];
			printf(" %d: %d\n", j+1, Student[i][j]);
		}
		printf(" sum: %.0f\n", sum);
		avg = sum/3.0;
		if(avg>havg){
			havg = avg;
			hstudent = i+1;
		}
		printf(" avg: %.2f\n", avg);
		total += sum;
	}
	avg = total/15.0;
	printf("total: %.0f, avg: %.2f\n", total, avg);
	printf("highest avg: student %d: %.2f", hstudent, havg);
	return 0;
}
