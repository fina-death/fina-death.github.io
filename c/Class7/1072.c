#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main1072(int argc, char *argv[]) {
	FILE *ReadFile;
	char str[80];
	
	ReadFile = fopen("../app/input.txt", "r");
	if(ReadFile == NULL){
		printf("Open File Fail.\n");
		return 0;
	}
	fscanf(ReadFile, "%s", str);
	puts(str);
//	printf("%s", str);
	fclose(ReadFile);
	return 0;
}
