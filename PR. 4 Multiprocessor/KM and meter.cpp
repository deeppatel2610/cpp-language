#include<iostream>
using namespace std;

class Distances
{
	int Km,meter;
	public :
		
		void set ()
		{
			cout << "Enter KM : ";
			cin >> Km;
			cout << "Enter meter : ";
			cin >> meter;
		}
		
		void method()
		{
			if(meter>=1000)
			{
				int tepm_km;
				tepm_km=meter/1000; // user meter convert to Km // ex. 1002/1000 = 1
				Km = tepm_km + Km; // user Km and user meter converted Km to sum
				meter=meter%1000; // ex. 1002%1000 = 2
			}
		}
		
		Distances operator+(Distances d)
		{
			Distances tepm;
			
			tepm.Km = this->Km + d.Km;
			tepm.meter = this->meter + d.meter;
			
			return tepm;
		}
		
		void get()
		{
			cout << "KM : " << Km << " Meter : "  << meter << endl;
		}
};

int main()
{
	Distances d1,d2,d3;
	
	d1.set();
	d1.method();
	d1.get();
	cout << endl;
	d2.set();
	d2.method();
	d2.get();
	cout << endl;
	
	d3=d2+d1;
	d3.get();
	
	return 0;
}