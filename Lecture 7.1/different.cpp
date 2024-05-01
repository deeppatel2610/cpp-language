#include <iostream>
using namespace std;

class divide
{
	protected:
	int x,y;
	public:
	void get()
	{
		cout << "enter x:";
		cin >> x;
		cout<<"enter y:";
		try
		{
			cin>>y;
			if(y==0)
			{
				throw y;
			}
			else 
			{
				cout << x/y << endl;
			}
		}
		catch(int c)
		{
			cout << "value cannot divide by zero" <<endl << endl;
		}
	}
	
};
class vote 
{
	protected:
	int vote;
	public:
		void get1()
			{
				cout<<"enter vote age :";
				try
				{
				cin >> vote;
				if(vote <= 18)
				{
					throw vote;
				}
				else 
				{
					cout << "eligible to vote " << vote << endl;
				}
				}
				catch(int s)
				{
					cout << "you are not eligible to vote" << endl << endl;
				}
			}
};
class password
{
	protected:
	char password;
	public:
	void get2()
	{
		cout<<"enter a password:";
		try
		{
			cin >> password;
			if(password >= 65 && password <= 90)
			{
				cout << "password is valid" << endl;
			}
			else 
			{
				throw password;
			}
		}
		catch(char r)
		{
			cout <<"password is invalid "<<endl<<endl;
		}
	}
	
};
int main()
{
	divide d1;
	d1.get();
	
	vote v1;
	v1.get1();
	
	password p1;
	p1.get2();
	return 0;
}