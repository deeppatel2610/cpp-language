#include<iostream>
using namespace std;

class time
{
	int sec,min=0,hour=0,s=0;
	
	public :
		
		void setter()
		{
			cout << "enter sec : ";
			cin >> sec;
		}
		
		void clock()
		{
			if(sec>=60)
			{
				min=sec / 60; //ex. 120/60 = 2 min
				s=sec % 60;   //ex. 140/60 = 2 min / 20 sec
				if(min>=60)
				{
					hour=min / 60; //ex. 240 / 60 = 4 hour
					min=min % 60;  //ex. 280 / 60 = 4 hour / 40 min
				}
			}
		}
		
		void getter()
		{
			cout << "hour : " << hour << " minutes : " << min << " seconds : " << s;
		}
};

int main()
{
	time t1;
	
	t1.setter();
	t1.clock();
	t1.getter();
	
	
	return 0;
}