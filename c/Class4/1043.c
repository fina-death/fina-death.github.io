#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1043(int argc, char *argv[]) {
	char str1[80], str2[80];
	int answer;
	gets(str1);
	gets(str2);
	answer = strcmp(str1, str2);
	if(answer==0){
		puts("1==2");
	}
	else if(answer>0){
		puts("1>2");
	}
	else{
		puts("1<2");
	}
	strcpy(str1, strcat(str1, str2));	
	puts(str1);
	printf("%d", strlen(str1));
	return 0;
}
