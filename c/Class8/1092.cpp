#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void Sequence(int *array, int num){
	int temp;
	for(int j=1;j<num;j++){
		for(int i=0;i<num-j;i++){
			if(*(array+i) > *(array+1+i)){
				temp = *(array+i);
				*(array+i) = *(array+i+1);
				*(array+i+1) = temp;
			}
		}
	}
}

int main1902(int argc, char** argv) {
	int *a ,n;
	
	cin >> n;
	a = new int(n);
	for(int i=0;i<n;i++){
		cin >> *(a+i);
	}
	Sequence(a, n);
	for(int i=0;i<n;i++){
		cout << *(a+i) << " ";
	}
}
