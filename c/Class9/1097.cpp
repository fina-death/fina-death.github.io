#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Point2D{
	public:
		Point2D();
		Point2D(int inX, int inY);
		int getX();
		int getY();
		void inputX();
		void inputY();
		void OutputPoint();
		Point2D Add(Point2D &inputPoint);
		Point2D mult(Point2D &inputPoint);
	private:
		int X;
		int Y;
};

//Class Point2D
Point2D::Point2D(){
	X=0;
	Y=0;
}

Point2D::Point2D(int inX, int inY){
	X=inX;
	Y=inY;
}

int Point2D::getX(){
	return X;
}

int Point2D::getY(){
	return Y;
}

void Point2D::inputX(){
	cin >> X;
}

void Point2D::inputY(){
	cin >> Y;
}

void Point2D::OutputPoint(){
	cout << "Result: X=" << X << ", y=" << Y << endl;
}

Point2D Point2D::Add(Point2D &inputPoint){
	X += inputPoint.getX();
	Y += inputPoint.getY();
	Point2D temp(X, Y);
	return temp;
}

Point2D Point2D::mult(Point2D &inputPoint){
	X *= inputPoint.getX();
	Y *= inputPoint.getY();
	Point2D temp(X, Y);
	return temp;
}

int main1097(int argc, char** argv) {
	Point2D p1, p2, p3;
	
	p1.inputX();
	p1.inputY();
	p2.inputX();
	p2.inputY();
	p3 = p2.mult(p1);
	p3.OutputPoint();
	
	return 0;
}
