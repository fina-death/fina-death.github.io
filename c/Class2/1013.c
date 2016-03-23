#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1013(int argc, char *argv[]) {
	float num1, num2;
	char math;
	scanf("%f%f", &num1, &num2);
	scanf(" %c", &math);
	switch(math){
		case '+':
			printf("%.2f + %.2f = %.2f", num1, num2, num1+num2);
			break;
		case '-':
			printf("%.2f - %.2f = %.2f", num1, num2, num1-num2);
			break;
		case '*':
			printf("%.2f * %.2f = %.2f", num1, num2, num1*num2);
			break;
		case '/':
			printf("%.2f / %.2f = %.2f", num1, num2, num1/num2);
			break;
		default:
			printf("roll error");
			return 0;
	}
	return 0;
}
