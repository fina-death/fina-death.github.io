#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Â²³æ­pºâ¾÷
int main1101(int argc, char *argv[]) {
	double num1, num2;
	scanf("%lf%lf", &num1, &num2);
	printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1+num2);
	printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1-num2);
	printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1*num2);
	printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1/num2);
	return 0;
}
