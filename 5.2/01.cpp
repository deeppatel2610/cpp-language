#include<iostream>
using namespace std;

class Meth
{
	int a,b;
	public :
		
		void input()
		{
			cout << "Enter your value : ";  
			cin >> a;
		}
		
		
		void output()
		{
			if(a>b)
			{
				cout << "a is mex" << a << endl;
			}
			else
			{ 
				cout << "b is mex " << b << endl;
			}
		}
		Meth operator<(Meth m2)
		{
			Meth temp;
				temp.b = m2.a;
		
				temp.a = this->a;
		
				return temp;
		}
};

int main()
{
	Meth m1,m2,m3;
	
	m1.input();
	m2.input();
	
	m3=m1<m2;
	
	m3.output();
	
	return 0;
}