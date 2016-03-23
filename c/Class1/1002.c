#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//兩數相加
int main1002(int argc, char *argv[]) {
	float num1, num2;
	scanf("%f%f", &num1, &num2);
	printf("%.2f + %.2f = %.2f", num1, num2, num1+num2);
	return 0;
}
