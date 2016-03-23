#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1015(int argc, char *argv[]) {
	char keyin="";
	while(keyin != 'q'){
		scanf(" %c", &keyin);
		printf("%c\n", keyin);
	}
	return 0;
}
