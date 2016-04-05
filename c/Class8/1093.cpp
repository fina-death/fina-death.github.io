#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

struct Person{
	string name;
	int high;
	int weight;
};

void show(int x){
	cout << "Intege: " << x << endl;
}

void show(string x){
	cout << "String: " << x << endl;
}

void show(struct Person x){
	cout << "Name: " << x.name << endl;
	cout << "Height: " << x.high << " cm" << endl;
	cout << "Weight: " << x.weight << " kg" << endl;
}

int main1093(int argc, char** argv){
	struct Person human;
	
	cin >> human.name;
	cin >> human.high;
	cin >> human.weight;	
	show(human);
}
