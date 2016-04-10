#include <iostream>
#include <string.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class eCash{
	public:
		eCash();
		void login();
		void logout();
		void store(int M);
		void pay(int M);
		void display();
		char menu();
		
	private:
		int Money;
		string ID;
		FILE *file;
};

eCash::eCash(){
	Money = 0;
}

void eCash::login(){
	char input[80];
	cout << "eCash: 請輸入您的帳號: ";
	cin >> input;
	ID = input;
	file = fopen(input, "r");
	if(file == NULL){
		cout << "eCash: " << "帳號不存在, 第一次使用!" << endl; 
	} 
	else{
		fscanf(file, "%d", &Money);
		cout << "eCash: " << "帳號開啟完成!" << endl; 
	}
	fclose(file);
}

void eCash::logout(){
	char filename[80];
	
	strcpy(filename, ID.c_str());
	file = fopen(filename, "w");
	fprintf(file, "%d", Money);
	cout << "eCash: 帳號登出, 已存檔!" << endl; 
	cout << "eCash: Thank you. Bye Bye." << endl;
	fclose(file);
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

char eCash::menu(){
	char input;
	cout << ID << "您好，請選擇項目:" << endl;
		cout << "s: 儲值" << endl; 
		cout << "p: 消費" << endl;
		cout << "d: 顯示餘額" << endl;
		cout << "q: 離開" << endl;
		cout << ">";
		cin >> input;
	return input;
}

int main(int argc, char** argv) {
	char input;
	int cash;
	eCash eWallet1;
	
	cout << "===歡迎使用eCash===" << endl;
	eWallet1.login();
	
	while(1){
		input = eWallet1.menu();
		switch(input){
			case 's':
			case 'S':
				cout << "請輸入存入金額:" << endl;
				cin >> cash;
				eWallet1.store(cash);
				break;
			case 'p':
			case 'P':
				cout << "請輸入消費金額:" << endl;
				cin >> cash;
				eWallet1.pay(cash);
				break;
			case 'd':
			case 'D':
				eWallet1.display();
				break;
		}
		if(input == 'q' || input == 'Q'){
			eWallet1.logout();
			break;
		} 
		system("pause");
		system("CLS");
	}
	return 0;
}
