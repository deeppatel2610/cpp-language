#include<iostream>
using namespace std;

class railway
{
	int n;
	string train_name,source,destination,train_time;

	
	public:
	int train_no;
	void setter()
	{
		cout << "Enter the train no : ";
		cin >> train_no;
		cin.ignore();
		
		cout << "Enter the train name : ";
		getline(cin,train_name);
		
		cout << "Enter the source : ";
		getline(cin,source);
		
		cout << "Enter the destination : ";
		getline(cin,destination);
		
		cout << "Enter the train time : ";
		getline(cin,train_time);
	}

	void getter()
	{
		cout << "Train no : "    << train_no << endl;
		cout << "Train name : "  << train_name << endl;
		cout << "Source : "      << source << endl;
		cout << "Destination : "<< destination << endl;
		cout << "Train time : "  <	< train_time << endl;
		
	}
		
	raiway()
	{
		cout << "WELCIME TO SURAT !";
	}
		
};
 int main()
{
		
		
		
		railway r;
		r.setter();

		cout << "....................." << endl;
		
		railway r1;
		r1.setter();

		cout << "....................." << endl;
		
		railway r2;
		r2.setter();
		
		cout << "....................." << endl;
		
		int t;
		cout << " Enter the details : " <<  endl;
		cin  >>  t;
		
		
		if(r.train_no == t)
		{
		    r.getter();
		}
		
		if(r1.train_no == t)
		{
		     r1.getter();
		}
		if(r2.train_no == t)
		{
		   r2.getter();
		}
		
		return 0;
}