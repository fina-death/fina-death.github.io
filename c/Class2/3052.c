#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main3052(int argc, char *argv[]) {
    int num;
    int i, j;
    scanf("%d", &num);
    for(i=0;i<=num/2;i++){
        for(j=0;j<num/2-i;j++){
            printf(" ");
        }
        for(j=0;j<i*2+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=num/2;i>0;i--){
        for(j=0;j<num/2-i+1;j++){
            printf(" ");
        }
        for(j=0;j<i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
