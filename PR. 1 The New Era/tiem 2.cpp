#include<iostream>
using namespace std;

class time
{
	int sec,min,hour,s=0;
	
	public :
		
		void setter()
		{
			cout << "enter hour : ";
			cin >> hour;
			cout << "enter min : ";
			cin >> min;
			cout << "enter sec : ";
			cin >> sec;
		}
		
		void clock()
		{
			if(sec>=60)
			{
				int team_min;
				team_min = sec / 60; // / <- min
				min = min + team_min;
				s=sec % 60; // % <- sec 
			}
			if(sec>=60)
			{
				int team_hour;
				team_hour = min / 60; // / <- hour
				hour = hour + team_hour;
				min=min % 60; // % <- min
			}
			// % This is used minimum units
			// / This is used maximum units
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