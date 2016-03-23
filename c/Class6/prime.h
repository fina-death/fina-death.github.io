#include <stdio.h>
#include <stdlib.h>
//prime.h

int IsPrime(int n){
	int flag=1;
	int i=2;
	while(n>=i*i){
		if(n%i == 0) flag=0;
		i++;
	}
	return flag; 
}
