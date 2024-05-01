#include<iostream>
using namespace std;

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

int main()
{
	vote v1;
	
	v1.get1();
	
	return 0;
}