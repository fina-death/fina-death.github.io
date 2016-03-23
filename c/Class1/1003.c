#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//三數簡易計算
int main1003(int argc, char *argv[]) {
	float num1, num2, num3;
	float smallest, largest;
	scanf("%f%f%f", &num1, &num2, &num3);
	if(num1>num2){
		largest = num1;
		smallest = num2;
	}
	else{
		largest = num2;
		smallest = num1;
	}
	if(num3>largest){
		largest = num3;
	}
	else{
		if(num3<smallest){
			smallest = num3;
		}
	}
	printf("sum is %.0f\n", num1+num2+num3);
	printf("average is %.2f\n", (num1+num2+num3)/3);
	printf("product is %.0f\n", num1*num2*num3);
	printf("smallest is %.0f\n", smallest);
	printf("largest is %.0f\n", largest);
	return 0;
}
