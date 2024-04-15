#include<iostream>
using namespace std;

class x
{
	protected :
		int a,b,c;
};

class y : public x
{
	public :
		
		void set()
		{
			cout << "Enter a : ";
			cin >> a;
			cout << "Enter b : ";
			cin >> b;
			cout << "enter c : ";
			cin >> c;
		}
		
		void get()
		{
			cout << "a = " << a*a*a << endl;
			cout << "b = " << b*b*b << endl;
			cout << "c = " << c*c*c << endl;
		}
};

int main()
{
	y y1;
	
	y1.set();
	y1.get();
	return 0;
}