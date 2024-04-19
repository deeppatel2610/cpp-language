#include<iostream>
using namespace std;

class Meth
{
	int n;
	public :
		void set()
		{
			cout << "Enter your value of n : ";
			cin >> n;
		}
		
		Meth operator++(int)
		{
			n++;
		}
		
		void get()
		{
			cout << n << endl;
		}
};

int main()
{
	
	Meth m1;
	
	m1.set();
	m1++;
	m1.get();
	return 0;
}