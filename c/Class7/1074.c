#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct note{
	char name[80];
	char email[80];
	char phone[80];
};

int main(int argc, char *argv[]) {
	char input;
	struct note *list1;
	char filename[80];
	int i=0, x, type=0;
	FILE *WFile, *RFile;
	
	list1 = (struct note*)malloc(sizeof(struct note)*(50));
	while(type == 0){
		scanf("%c", &input);
		fflush(stdin);
		switch(input){
			case 'i':
				scanf("%s", list1[i].name);
				fflush(stdin);
				scanf("%s", list1[i].phone);
				fflush(stdin);
				scanf("%s", list1[i].email);
				fflush(stdin);
				i++;
				break;
			case 'l':
				for(x=0;x<i;x++){
					printf("Name: %s\n", list1[x].name);
					printf("Phone: %s\n", list1[x].phone);
					printf("Email: %s\n", list1[x].email);
				}
				break;
			case 's':
				scanf("%s", filename);
				WFile = fopen(filename, "w");
				for(x=0;x<i;x++){
					fprintf(WFile, "%s\n", list1[x].name);
					fprintf(WFile, "%s\n", list1[x].phone);
					fprintf(WFile, "%s\n", list1[x].email);
				}
				fclose(WFile);
				break;
			case 'o':
				scanf("%s", filename);
				RFile = fopen(filename, "r");
				i=0;
				while(1){
					fscanf(RFile, "%s", list1[i].name);
					if(feof(RFile)) break;
					fscanf(RFile, "%s", list1[i].phone);
					fscanf(RFile, "%s", list1[i].email);
					i++;
				}
				fclose(RFile);
				break;
			case 'c':
				free(list1);
				list1 = (struct note*)malloc(sizeof(struct note)*(50));
				i=0;
				break;
			case 'q':
				type=1;
				break;
		}
	}
	
	return 0;
}
