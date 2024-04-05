#include<iostream>
using namespace std;

class Customer
{
	int id;
	char name[100];
	int age;
	char city[100];
	long int mobile_number;
	int simcard_validity;
	char telecom_brand_name[100];
	
	public :
		void input()
		{
			cout << "Customer id : ";
			cin >> id;
			cout << "Customer name : ";
			cin >> name;
			cout << "Customer age : ";
			cin >> age;
			cout << "Customer city : ";
			cin >> city;
			cout << "Customer mobile number : ";
			cin >> mobile_number;
			cout << "Customer simcard validity : ";
			cin >> simcard_validity;
			cout << "Customer telecom brand name : ";
			cin >> telecom_brand_name;
		}
		
		void output()
		{
			cout << endl << "Customer id : " << id << endl;
			cout << "Customer name : " << name << endl;
			cout << "Customer age : " << age << endl;
			cout << "Customer city : " << city << endl;
			cout << "Customer mobile number : " << mobile_number << endl;
			cout << "Customer simcard validity : " << simcard_validity << endl;
			cout << "Customer telecom brand name : " << telecom_brand_name << endl;
		}
};

int main() 
{
	Customer c1,c2,c3,c4,c5;
	
	c1.input();
	c2.input();
	c3.input();
	c4.input();
	c5.input();
	
	c1.output();
	c2.output();
	c3.output();
	c4.output();
	c5.output();
}