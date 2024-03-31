#include<iostream>
using namespace std;

// car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year

class car
{
	public :

	int id;
	char c_name[100];
	char color[100];
	char model[100];
	int r_year;
	
	void output()
	{
		cout << "car id : ";
		cin >> id;
		cout << "car company name : ";
		cin >> c_name;
		cout << "car color : ";
		cin >> color;
		cout << "car model name : ";
		cin >>  model;
		cout << "car release year : ";
		cin >>  r_year;
		cout << endl << endl;
	}
	
	void input()
	{
		cout << "car id : " << id << endl;
		cout << "car company name : " << c_name << endl;
		cout << "car color : " << color << endl;
		cout << "car model : " << model << endl;
		cout << "car release year : " << r_year << endl << endl;
	}
};


int main()
{
	car c1,c2,c3,c4;
		
	c1.output();
	c2.output();
	c3.output();
	c4.output();
	
	c1.input();
	c2.input();
	c3.input();
	c4.input();
	
	return 0;
}