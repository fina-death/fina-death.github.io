#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct Employee
{
    char Name[20];
    char Phone[10];
    int id;
};

int main1071(int argc, char *argv[]) {
	int i;
	int input;
	int foundflag=0;
	struct Employee emp[3];
	
	for(i=0;i<3;i++){
		scanf("%s%s%d", emp[i].Name, emp[i].Phone, &emp[i].id);
	}
	scanf("%d", &input);
	for(i=0;i<3;i++){
		if(input == emp[i].id){
			foundflag = 1;
			printf("found\n");
			printf("Name: %s\n", emp[i].Name);
			printf("Phone: %s\n", emp[i].Phone);
			printf("Id: %d\n", emp[i].id);
		}
	}
	if(foundflag == 0) printf("not found");
	return 0;
}
