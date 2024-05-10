#include<iostream>
using namespace std;

class Person
{
	char name[100];
	int age;
	char address[100];
	
	public :
		
		void setter()
		{
			cout << "enter your name : ";
			cin >> name;
			cout << "enter your age : ";
			cin >> age;
			cout << "enter your address : ";
			cin >> address;
		}
		
		void getter()
		{
			cout << "your name : " << name << endl;
			cout << "your age : " << age << endl;
			cout << "your address : " << address << endl;
		}
		
		Person (int a)
		{
			cout << "your name : " << endl;
			cout << "your age : " << endl;
			cout << "your address : " << endl;
		}
};

int main()
{
	Person p1;
	
	return 0;
}