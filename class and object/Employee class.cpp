#include<iostream>
using namespace std;

//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_salary
//- emp_city
//- emp_experience
//- emp_company_name

class Employee
{
	public :
	int id;
	char name[50];
	int age;
	char role[50];
	int salary;
	char city[50];
	int experience;
	char c_name[50];
	
	void input()
	{
		cout << "Employee id : ";
		cin >> id;
		cout << "Employee name : ";
		cin >> name;
		cout << "Employee age : ";
		cin >> age;
		cout << "Employee role : ";
		cin >> role;
		cout << "Employee salary : ";
		cin >> salary;
		cout << "Employee city : ";
		cin >> city;
		cout << "Employee experience : ";
		cin >> experience;
		cout << "Employee company name : ";
		cin >> c_name;
		cout << endl;
	}
	
	void output()
	{
		cout << "Employee id : " << id << endl;
		cout << "Employee name : " << name << endl;
		cout << "Employee age : " << age << endl;
		cout << "Employee role : " << role << endl;
		cout << "Employee salary : " << salary << endl;
		cout << "Employee city : " << city << endl;
		cout << "Employee experience : " << experience << endl;
		cout << "Employee company name : " << c_name << endl << endl;
	}
};

int main()
{
	Employee e1,e2,e3,e4,e5;
	
	e1.input();
	e2.input();
	e3.input();
	e4.input();
	e5.input();
	
	e1.output();
	e2.output();
	e3.output();
	e4.output();
	e5.output();
	
	return 0;
}