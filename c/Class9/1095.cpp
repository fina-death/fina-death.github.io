#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Square{
	public:
		Square(){
			len = 0;
		}
		
		int area(){
			return len * len;
		}
	
		void setLen(int n){
			cin >> len;
			if(len < 0) len = 0;
		}	

		int getLen(){
			return len;
		}
		
	private:
		int len;
};

int main1095(int argc, char** argv) {
	Square s1, s2, s3;
	
	s1.setLen(0);
	s2.setLen(0);
	
	cout << "Area = " << s1.area() << " cm^2" << endl;
	cout << "Area = " << s2.area() << " cm^2" << endl;
	cout << "Area = " << s3.area() << " cm^2" << endl;
	return 0;
}
