#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main1022(int argc, char *argv[]) {
    int num;
    int i, j;
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        for(j=0;j<num-i;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
