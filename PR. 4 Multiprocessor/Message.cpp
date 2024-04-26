#include<iostream>
#include<string.h>
using namespace std;

//Q.1 Write a Program to create a Message class with a constructor 
//that takes a single string with a default value.
//Create a private member of the typed string,
// and in the constructor simply assign the argument string to your internal string.
// Create two overloaded member functions called print( ): one that takes no arguments
// and simply prints the message stored in the variable and one that takes a string argument,
// which it prints in addition to the internal message.

class Message
{
	string name1;
	public :		
		string name2;
		Message ()
		{
			cout << "Entre your name : ";
			cin >> name1;
			name2=name1;
		}
		
		void print()
		{
			cout << "Hii " << name1 << endl;
		}
		
		void print(string temp)
		{
			cout << name1 << " " << temp << endl;
		}
};
int main()
{
	Message m1;
	
	m1.print();
	m1.print(m1.name2);
	
	
	return 0;
}