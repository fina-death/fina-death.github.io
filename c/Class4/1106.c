#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char answer[4], quess[4];
	int Ai, Bi;
	int i, j;
	printf("Please enter answer:\n");
	scanf("%s", answer);
	do{
		Ai = 0;
		Bi = 0;
		printf("Please enter quess:\n");
		scanf("%s", quess);
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(answer[i] == quess[j]){
					if(i == j) Ai += 1;
					else Bi += 1;
				}
			}
		}
		printf("%dA%dB\n", Ai, Bi);
	}while(Ai != 4);
	printf("You Win!");
	return 0;
}
