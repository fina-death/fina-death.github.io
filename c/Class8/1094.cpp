#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void Sequence(string *array, int num){
	string temp;
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

int main(int argc, char** argv) {
	int n;
	string *str1;
	
	cin >> n;
	str1 = new string[n];
	for(int i=0;i<n;i++){
		cin >> *(str1+i);
	}
	Sequence(str1, n);
	for(int i=0;i<n;i++){
		cout << *(str1+i) << " ";
	}
}
