#include<iostream>
using namespace std;

//A=p*r*r
//A=h*b/2
//A=w*l

class Meth
{
	protected :
	virtual void calculate() = 0;
};

class Circle
{
	int r;	
	const float pi=3.14;
	public : 
		void calculate()
		{
			cout << "Enter Radius : ";
			cin >> r;
			
			cout << "Circle area : " << r*r*pi << endl;
		}
};

class Triangle
{
	int h,b;
	public :
		void calculate()
		{
			cout << endl << "Enter Base and Height : ";
			cin >> b >> h;
			
			cout << "Triangle area : " << h*b/2 << endl;
		}
};

class Rectangle
{
	int l,w;
	public :
		void calculate()
		{
			cout << endl << "Enter Width and Length : ";
			cin >> w >> l;
			
			cout << "Rectangle area : " << w*l << endl;
		}
};

int main()
{
	Circle c1;
	c1.calculate();
	
	Triangle t1;
	t1.calculate();
	
	Rectangle r1;
	r1.calculate();
	
	return 0;
}