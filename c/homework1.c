#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double num1, num2;
	printf("請輸入兩個數字:");
	scanf("%lf%lf", &num1, &num2);
	printf("計算結果:\n");
	printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1+num2);
	printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1-num2);
	printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1*num2);
	printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1/num2);
	return 0;
}
