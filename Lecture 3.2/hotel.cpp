#include<iostream>
using namespace std;

//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity

class hotel
{
	int id;
	char name[100];
	char type[100];
	char rating[100];
	char city[100];
	int year;
	int staff_quantity;
	int room_quantity;
	
	public :
		
		int n;
		void aerry()
		{
			cout << "enter value : ";
			cin >> n;
		}
		
		void setter()
		{
			cout << "enter id : ";
			cin >> id;
			cout <<"enter name : ";
			cin >> name;
			cout << "enter hotel type : ";
			cin >> type;
			cout << "enter hotel rating : ";
			cin >> rating;
			cout << "enter hotel location : ";
			cin >> city;
			cout << "enter hotel establish year : ";
			cin >> year;
			cout << "enter hotel staff quantity : ";
			cin >> staff_quantity;
			cout << "enter hotel room quantity : ";
			cin >> room_quantity;
		}
		
		void getter()
		{
			cout << "enter id : " << id << endl;
			cout <<"enter name : " << name << endl;
			cout << "enter hotel type : " << type << endl;
			cout << "enter hotel rating : " << rating << endl;
			cout << "enter hotel location : " << city << endl;
			cout << "enter hotel establish year : " << year << endl;
			cout << "enter hotel staff quantity : " << staff_quantity << endl;
			cout << "enter hotel room quantity : " << room_quantity << endl;
		}
};

int main()
{
	hotel no;
	no.aerry();
	hotel h[no.n];
	
	int i;
	for(i=0;i<no.n;i++)
	{
		h[i].setter();
		cout << endl;
		h[i].getter();
		cout << endl;
	}
	
	
}