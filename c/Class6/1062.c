#include <stdio.h>
#include <stdlib.h>
#include "prime.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;

	scanf("%d", &input);
	if(IsPrime(input)) printf("%d is prime", input);
	else printf("%d is not prime", input);
	return 0; 
}
