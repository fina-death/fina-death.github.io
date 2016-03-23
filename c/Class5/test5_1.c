#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int maintest5_1(int argc, char *argv[]) {
	int j = 11;
	int i, k, max;
	float test;
	int *ptr1;
	float *ptr2;
	int test2[4] = {1, 2, 3, 4};
	int A[5];
/*	
	ptr1 = &j;
	printf("j\t%x\t%d\n", &j, j);
	k = ptr1;
	printf("k\t%x\t%d\n", &k, k);
	printf("ptr1\t%p\t%d\n", &ptr1, ptr1);
	k = *ptr1;
	printf("k\t%x\t%d\n", &k, k);
	printf("test[0]\t%p\n", &test[0], k);
	printf("test\t%p\n", test);
	
	ptr1 = test;
	printf("test[0]\t%d\n", *ptr1);
	printf("test[1]\t%d\n", ptr1[1]);
	printf("test[2]\t%d\n", *(ptr1+2));
	printf("test[3]\t%d\n", ptr1[3]);
*/
/*
	ptr1 = A;
	for(i=0;i<5;i++){
		scanf("%d", A+i);
	}
	max = *ptr1;
	for(i=1;i<5;i++){
		if(max < *(ptr1+i)) max = *(ptr1+i+1);
	}
	for(i=0;i<5;i++){
		printf("%d\n", *(ptr1+i));
	}
	printf("%d", max);
*/	
	ptr2 = &i;
	*ptr2 = 5;
	printf("%.2f\n", *ptr2);

	ptr2 = &test;
	test = 2134;
	printf("%.2f", *ptr2);
	return 0;
}
