#include<iostream>
using namespace std;

class feet_inch
{
	
	public :
		int feet,inch;
		int f=12,INCH=0;
		
		void setter()
		{
			cout << "enter feet : ";
			cin >> feet;
			cout << "enter inch : ";
			cin >> inch; 
		}
		void read()
		{
			int i;
			for(i=1;i<=inch;i++)
			{
				if(inch>=f)
				{
					//f=12 , 24 , 36 ,48
					if(i==f)
					{
						f+=12;
						feet+=1;
					}
				}
				else
				{
					INCH+=1;
				}
			}
		}
		void getter()
		{
			cout << "feet : " << feet << endl << "inch : " << INCH;
		}
};

int main()
{
	feet_inch fi1,fi2;
	
	fi1.setter();
	fi1.read();
	fi1.getter();
	
	cout << endl;
	
	fi2.setter();
	fi2.read();
	fi2.getter();
	
	int n = fi1.feet + fi2.feet;
	int m = fi1.INCH + fi2.INCH;
	
	cout << endl << endl << "feet : " << n << endl << "inch : " << m;
	return 0;
}