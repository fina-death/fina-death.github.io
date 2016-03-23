#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1042(int argc, char *argv[]) {
	char str1[80];
	int i;
	gets(str1);
	for(i=0;i<80;i++){
		if(str1[i]>=97 && str1[i]<=122) str1[i] -= 32;
	}
	puts(str1);
	return 0;
}
