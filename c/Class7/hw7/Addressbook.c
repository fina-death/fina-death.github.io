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
	while(1){
		puts("i: ���J");
		puts("l: �C�X");
		puts("s: �s��");
		puts("o: Ū��");
		puts("c: �M���Ȧs��");
		puts("q: ����");
		printf(">");
		scanf("%c", &input);
		
		fflush(stdin);
		switch(input){
			case 'i':
				system("CLS");
				printf("Name: ");
				scanf("%s", list1[i].name);
				fflush(stdin);
				printf("Phone: ");
				scanf("%s", list1[i].phone);
				fflush(stdin);
				printf("Email: ");
				scanf("%s", list1[i].email);
				fflush(stdin);
				printf("%s��ƫإߧ����C", list1[i].name);
				system("pause");
				i++;
				break;
			case 'l':
				system("CLS");
				for(x=0;x<i;x++){
					printf("Name: %s\n", list1[x].name);
					printf("Phone: %s\n", list1[x].phone);
					printf("Email: %s\n", list1[x].email);
				}
				printf("�q�T��Ū�������C", list1[i].name);
				system("pause");
				break;
			case 's':
				system("CLS");
				printf("Please enter a file name[save]: ");
				scanf("%s", filename);
				WFile = fopen(filename, "w");
				for(x=0;x<i;x++){
					fprintf(WFile, "%s\n", list1[x].name);
					fprintf(WFile, "%s\n", list1[x].phone);
					fprintf(WFile, "%s\n", list1[x].email);
				}
				fclose(WFile);
				printf("��Ʀs�ɧ����C");
				system("pause");
				break;
			case 'o':
				system("CLS");
				printf("Please enter a file name[read]: ");
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
				printf("���Ū�������C");
				system("pause");
				break;
			case 'c':
				system("CLS");
				free(list1);
				list1 = (struct note*)malloc(sizeof(struct note)*(50));
				i=0;
				printf("�Ȧs��ƲM�������C");
				system("pause");
				break;
		}
		if(input == 'q') break;
		system("CLS");
	}
	return 0;
}
