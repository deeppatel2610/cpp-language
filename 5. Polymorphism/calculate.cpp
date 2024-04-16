#include<iostream>
using namespace std;

class Program
{
	int a,b,c,d,e;
	public :
		
		void calculate(int a, int b)
		{
			int i=a/b;
			cout << "division for a / b  : " << i << endl;
		}
		
		void calculate(int a, int b,int c)
		{
			int j=a-b-c;
			cout << "subtraction for a - b - c : " << j << endl;
		}
		
		void calculate(int a, int b, int c,int d)
		{
			int k=a*b*c*d;
			cout << "multiplication for a * b * c * d : " << k << endl;
		}
		
		void calculate(int a, int b, int c, int d, int e)
		{
			int l=a+b+c+d+e;
			cout << "addition for a + b + c + d + e : " << l << endl;
		}		
};

int main()
{
	Program p1;
	
	p1.calculate(10,20);
	p1.calculate(10,20,30);
	p1.calculate(10,20,30,40);
	p1.calculate(10,20,30,40,50);
	
	return 0;
}