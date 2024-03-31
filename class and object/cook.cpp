#include<iostream>
using namespace std;

class Tiem
{
	public :
	int n;
	int sed(int n)
	{
		int i,sec=0,ho=0,de=0,p=60,l=3600,m=86400;
		for(i=1;i<=n;i++)
		{
			if(i==p)
			{
				sec = sec + 1;
				p+=60;
				
				if(i==l)
				{
					ho = ho + 1;
					l+=3600;
					
					if(i==m)
					{
						de = de + 1;
						m+=86400;
					}
				}
			}
		}
		cout << de <<" day " << ho << " hour " << sec  << " minute " << n << " second";
	}
};
int main()
{
	Tiem t1;
	cout << "enter your value of n : ";
	cin >> t1.n;
	
	t1.sed(t1.n);
	
	return 0;
}