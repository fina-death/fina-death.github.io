#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1016(int argc, char *argv[]) {
	char keyin;
	scanf(" %c", &keyin);
	while(keyin == 'y'){
		printf("run\n");
		scanf(" %c", &keyin);
	}
	return 0;
}
