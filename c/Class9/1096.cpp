#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class eCash{
	public:
		eCash();
		void store(int M);
		void pay(int M);
		void display();
		
	private:
		int Money;
};

eCash::eCash(){
	Money = 0;
}

void eCash::store(int M){
	if(M < 0) cout << "eCash: Please enter a number > 0." << endl;
	else{
		Money += M;
		cout << "eCash: You stored " << M << "." << endl;
	}
}

void eCash::pay(int M){
	if(M < 0) cout << "eCash: Please enter a number > 0." << endl;
	else{
		if(Money < M){
			cout << "eCash: Insufficient balance." << endl;
		}
		else{
			Money -= M;
			cout << "eCash: You spend " << M << "." << endl;
		}
	}
}

void eCash::display(){
	cout << "eCash: You remaining " << Money << "." << endl;
}

int main(int argc, char** argv) {
	char input;
	int cash;
	eCash eWallet1;
	
	while(1){
		cin >> input;
		switch(input){
			case 's':
				cin >> cash;
				eWallet1.store(cash);
				break;
			case 'p':
				cin >> cash;
				eWallet1.pay(cash);
				break;
			case 'd':
				eWallet1.display();
				break;
		}
		if(input == 'q') break;
	}
	cout << "eCash: Thank you. Bye Bye.";
	return 0;
}	
