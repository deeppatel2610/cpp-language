#include<iostream>
using namespace std;

class FileManager
{
	public :
		void method ()
		{
			cout << "read data !"<< endl;
		}
		
		void handling()
		{
			cout << "errors !" << endl; 
		}
};

int main()
{
	FileManager a1;
	a1.method();
	a1.handling();
	return 0;
}