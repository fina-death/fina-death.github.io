#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void swapfun(int &x, int &y){
	int tmp;
	tmp = y;
	y = x;
	x = tmp;
}

int main1091(int argc, char** argv) {
	int a ,b;
	cin >> a >> b;
	swapfun(a, b);
	cout << a << endl; 
	cout << b;
	return 0;
}
