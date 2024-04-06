#include<iostream>
using namespace std;

//- cafe_id
//- cafe_name
//- cafe_type (like a rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity

class cafe
{
	int id;
	char name[100];
	char type[100];
	int rating;
	char city[100];
	int year;
	int staff_quantity;
	
	public :
		cafe()
		{
			cout << "enter id : ";
			cin >> id;
			cout << "enter name : ";
			cin >> name;
			cout << "enter cafe type : ";
			cin >> type;
			cout << "enter cafe rating : ";
			cin >> rating;
			cout << "enter cafe location : ";
			cin >> city;
			cout << "enter cafe establish year : ";
			cin >> year;
			cout << "enter cafe staff quantity : ";
			cin >> staff_quantity;
			cout << endl;
		}
		
		void getter()
		{
			cout << "enter id : " << id << endl;
			cout << "enter name : " << name << endl;
			cout << "enter cafe type : " << type << endl;
			cout << "enter cafe rating : " << rating << endl;
			cout << "enter cafe location : " << city << endl;
			cout << "enter cafe establish year : " << year << endl;
			cout << "enter cafe staff quantity : " << staff_quantity << endl;
		}
		
};

int main()
{
	cafe c1,c2;
	
	c1.getter();
	cout << endl;
	c2.getter();
}