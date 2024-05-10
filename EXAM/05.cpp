#include<iostream>
using namespace std;

class Complex
{
	int a,b,c;
	public :
		void set()
		{
			cout << "enter your value a : ";
			cin >> a;
			cout << "enter your value b : ";
			cin >> b;
		}
		
		void get()
		{
			cout << "your value a : " << a << endl;
			cout << "your value b : " << b << endl;
			cout << "your value c : " << a-b << endl << endl;
		}

		Complex operator-(Complex k)
		{
			this->c = this->a - k.b;
		}
};

int main()
{
	Complex c1,c2,c3;
	
	c1.set();
	c1.get();
	
	c2.set();
	c2.get();
	
	c3=c2-c1;
	c3.get();
	return 0;
}